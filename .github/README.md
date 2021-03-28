# cpp-script Transpiler

# Building
On Windows (in cmd):
```batch
mingw32-make -f Makefile-win
```
On Linux:
```sh
make -f Makefile-linux
```
On PowerShell:
```PowerShell
mingw32-make -f Makefile-PS # On Windows
make -f Makefile-PS # On Linux
```
# Using
To transpile C++S source to C++, simply invoke the following command:
```PowerShell
cpps-trans source.cpps -o source.cpp
```
or
```PowerShell
cpps-trans -o source.cpp source.cpps
```

# You don't know what is C++Script yet?
C++Script is a language based on C++ with syntax like in Pascal/Python/Ruby/Perl.
With it, you can choose a line comment char, a multiline comment char(s), whether operators are alphabetic characters or basic and whether neq operator is `=/=` or `!=` or `neq`!

In the future C++S is expected to be reflective and DSL-oriented, but it will be GPL as well.

More info can be found in the main repo ([here](https://github.com/cpp-script-lang/cpp-script-lang)).
