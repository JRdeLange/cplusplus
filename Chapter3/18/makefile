# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++-8
CXXFLAGS = --std=c++2a -Wall -pedantic -Werror -g

main: main.o usage.o structCall.o boundCall.o combine.o getRequestedNumber.o
	$(CXX) $(CXXFLAGS) -o main main.o usage.o structCall.o boundCall.o combine.o getRequestedNumber.o

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

structCall.o: structCall.cpp

boundCall.o: boundCall.cpp

combine.o: combine.cpp

getRequestedNumber.o: getRequestedNumber.cpp

usage.o: usage.cpp
