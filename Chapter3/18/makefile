# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++-8
CXXFLAGS = --std=c++2a -Wall -Werror

main: main.o
	$(CXX) $(CXXFLAGS) -o main main.o

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp
