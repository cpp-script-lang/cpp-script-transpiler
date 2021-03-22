CXXFLAGS=-std=c++2a -I. -fconcepts
all : bin_dir
	mkdir bin
	cd bin
	g++ API.hpp errors.hpp other.hpp transpiler.hpp main.cpp -o cpp-trans $(CXXFLAGS)
	@echo Builded target cpps-trans.

clean :
	rd -Force bin
	rd /S bin
	rm -rf bin