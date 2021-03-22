#pragma once
#include<iostream>
#define __BASIC__
#include<API.hpp>

using exit_t = int;
using error_t = void;
using AST = std::vector<std::vector<std::string>>;

exit_t version()
{
    std::cout << R"(
C++Script to C++ transpiler
Author: Antoni Kiedos
Source code: https://github.com/cpp-script-lang/transpiler
Bugs: https://github.com/cpp-script-lang/transpiler/issues
Contributing: https://github.com/cpp-script-lang/transpiler/pulls
Version: 0.10.0-beta+win
Created: 22.03.2021
Prepared for release: 22.03.2021
Stable Version: 22.03.2021
Released:
Is LTS?: No
----------------
Copyright (C) by Antoni Kiedos, Poland
)";
    return 0;
}
exit_t help()
{
    std::cout << R"(
USAGE
cpps-trans -o outputfile.cpp inputfile.cpps
cpps-trans inputfile.cpps -o outputfile.cpp
cpps-trans (-v | --version)
cpps-trans (-h | --help)
cpps-trans
----------------
Copyright (C) by Antoni Kiedos, Polnad
)";
    return 0;
}