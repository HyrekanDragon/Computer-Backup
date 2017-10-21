main: main.o combinatronics.o
	g++ main.o combinatronics.o -o main

main.o: main.cpp combinatronics.h
	g++ -c main.cpp

combinatronics.o: combinatronics.cpp
	g++ -c combinatronics.cpp
clean:
	rm *.o
