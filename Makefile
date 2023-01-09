CXX=g++
CXXFLAGS=-g -Wall -std=c++17 


build: main.cpp 
	$(CXX) $(CXXFLAGS) main.cpp -o main 

run: 
	./main


clean: 
	rm -f *.o main
.PHONY: 
