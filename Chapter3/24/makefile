# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++-8
CXXFLAGS = --std=c++2a -Wall -Werror -pedantic -g -pg

main: main.o callRef.o callValue.o
	$(CXX) $(CXXFLAGS) -o main main.o callRef.o callValue.o

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

callRef.o: callRef.cpp

callValue.o: callValue.cpp
