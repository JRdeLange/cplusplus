CXX = g++-9
CXXFLAGS = --std=c++2a -Wall

SOURCES := $(wildcard *.cc *.cpp)
OBJECTS := $(patsubst %.cc,%.o, $(patsubst %.cpp,%.o,$(SOURCES)))

main: main.o sumDouble.o sumInt.o
	$(CXX) $(CXXFLAGS) -o main main.o sumDouble.o sumInt.o

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

sumDouble.o: sumDouble.cpp
	$(CXX) $(CXXFLAGS) -c sumDouble.cpp

sumInt.o: sumInt.cpp
	$(CXX) $(CXXFLAGS) -c sumInt.cpp


