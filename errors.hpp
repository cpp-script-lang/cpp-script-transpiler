#pragma once
#include<iostream>
#include<other.hpp>
#define __BASIC__
#include<API.hpp>
constexpr exit_t TRANSPILED = 0;
constexpr exit_t NOFILE = 1;
constexpr exit_t UNRECOGNISEDARG = 2;
namespace Abort
{
    error_t NoFileSpecified(const std::string& io) noexcept
    {
        std::cerr << "No " << io << " file specified!\nAborting...\n ";
    }
    error_t UnrecognisedArg(const std::string& arg) noexcept
    {
        std::cerr << "Unrecognised commandline argument `" << arg << "'!\nAborting...\n";
    }
}