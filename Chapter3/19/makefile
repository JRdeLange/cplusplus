# Makefile for Writing Make Files Example

CXX = g++-8
CXXFLAGS = --std=c++2a -Wall -Werror -pendantic -g

main: main.o
	$(CXX) $(CXXFLAGS) -o main main.o 

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp
