a.out: main.cpp test.o
	g++ -O3 main.cpp test.o

test.o: test.cpp test.h
	g++ -O3 -c test.cpp 

clean:
	rm -f a.out test.o
