# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++-8
CXXFLAGS = --std=c++2a -Wall -Werror -g

main: main.o split.o
	$(CXX) $(CXXFLAGS) -o main main.o split.o

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

split.o: split.cpp
