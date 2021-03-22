#define __IO__
#define __TRANSPILER__
#include<other.hpp>
#include<errors.hpp>
#include<transpiler.hpp>
#include<API.hpp>


int main(int argc, char** argv)
{
    using std::literals::operator ""s;
    std::regex file_cpps(R"(^[^\-][a-zA-Z_\-0-9]*?\.cpps$)");
    std::regex file_cpp(R"(^[^\-][a-zA-Z_\-0-9]*?\.cpp$)");
    // std::regex file(R"(^[^\-][a-zA-Z_\-0-9]*?$)");
    if(argc == 4)
    {
        bool match_file_1_in = std::regex_match(std::string(argv[1]), file_cpps);
        bool match_file_2_out = std::regex_match(std::string(argv[2]), file_cpp);
        bool match_file_3_in = std::regex_match(std::string(argv[3]), file_cpps);
        bool match_file_3_out = std::regex_match(std::string(argv[3]), file_cpp);
        if(match_file_1_in)
        {
            if(std::string(argv[2]) == "-o")
            {
                if(match_file_3_out)
                {
                    std::ifstream cpps(argv[1]);
                    std::ofstream cpp(argv[3]);
                    return transpile(cpps, cpp);
                }
                else
                {
                    Abort::NoFileSpecified("output");
                    return NOFILE;
                }
            }
        }
        else if(std::string(argv[1]) == "-o")
        {
            if(match_file_2_out)
            {
                if(match_file_3_in)
                {
                    std::ifstream cpps(argv[3]);
                    std::ofstream cpp(argv[2]);
                    return transpile(cpps, cpp);
                }
                else
                {
                    Abort::NoFileSpecified("input");
                    return NOFILE;
                }
            }
            else
            {
                Abort::NoFileSpecified("output");
                return NOFILE;
            }
            
        }
        else
        {
            Abort::UnrecognisedArg(std::string(argv[1]));
            return UNRECOGNISEDARG;
        }
    }
    else if(argc == 2)
    {
        if(std::string(argv[1]) == "-h"s || std::string(argv[1]) == "--help"s) return help();
        else if(std::string(argv[1]) == "-v"s || std::string(argv[1]) == "--version"s) return version();
        else
        {
            Abort::UnrecognisedArg(std::string(argv[1]));
            return UNRECOGNISEDARG;
        }
    }
    else if(argc == 1) return help();
}