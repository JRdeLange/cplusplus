# Makefile for Writing Make Files Example

CXX = g++-9
CXXFLAGS = --std=c++2a -Wall -Werror -pedantic -g

main: main.o usage.o determineLineCount.o determineWordCount.o determineCharacterCount.o resolveOptions.o
	$(CXX) $(CXXFLAGS) -o main main.o usage.o determineLineCount.o determineWordCount.o determineCharacterCount.o resolveOptions.o

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

determineLineCount.o: determineLineCount.cpp

determineWordCount.o: determineWordCount.cpp

determineCharacterCount.o: determineCharacterCount.cpp

resolveOptions.o: resolveOptions.cpp
