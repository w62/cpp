#!/bin/bash
clang++ -g ch5.cpp `llvm-config --cxxflags --ldflags --system-libs --libs core orcjit native` -O3 -o ch5
