ex9: Vector.o ex9.o
	g++ -Wall -g -std=c++17 -o ex9 ex9.o Vector.o

ex9.o: ex9.cc Vector.h
	g++ -Wall -g -std=c++17 -c ex9.cc

Vector.o: Vector.cc Vector.h
	g++ -Wall -g -std=c++17 -c Vector.cc

clean:
	rm ex9 ex9.o Vector.o