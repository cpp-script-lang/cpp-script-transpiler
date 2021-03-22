#pragma once
#define __TRANSPILER__
#define __IO__
#define __BASIC__
#include<other.hpp>
#include<errors.hpp>
#include<API.hpp>
AST parse(std::ifstream& program)
{
    std::vector<std::string> res_str_mid{};
    std::istringstream from;
    {
        size_t i = 0;
        while(std::getline(program, res_str_mid[i], '\n')) i++;
    }
    std::vector<std::vector<std::string>> res{};
    {
        size_t j = 0;
        for(size_t i = 0; i < res_str_mid.size(); i++)
        {
            from = std::istringstream(res_str_mid[i]);
            while(std::getline(from, res[i][j], ' ')) j++;
        }
    }
    return res;
}
exit_t transpile(std::ifstream& program, std::ofstream& cpp)
{
    // ...
    return TRANSPILED;
}