CXX = g++
CXXFLAGS	= -std=c++11 -ggdb -Wall

all: test

clean:
	rm math_utils.o test.o test

test: test.o math_utils.o
	$(CXX) $(CXXFLAGS) test.o math_utils.o -o test

test.o: test.cc
	$(CXX) $(CXXFLAGS) -c test.cc

math_utils.o: math_utils.cc
	$(CXX) $(CXXFLAGS) -c math_utils.cc
