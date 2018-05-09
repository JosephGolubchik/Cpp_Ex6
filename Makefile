CXX=clang++-5.0
CXXFLAGS=-std=c++17 

all: Board.o Point.o MyException.o
	
Board.o: 
	$(CXX) $(CXXFLAGS) -c Board.cpp -o Board.o
Point.o:
	$(CXX) $(CXXFLAGS) -c Point.cpp -o Point.o
IllegalCoordinateException.o:
	$(CXX) $(CXXFLAGS) -c IllegalCoordinateException.cpp -o IllegalCoordinateException.o
IllegalCharException.o:
	$(CXX) $(CXXFLAGS) -c IllegalCharException.cpp -o IllegalCharException.o

clean:
	rm *.o a.out
