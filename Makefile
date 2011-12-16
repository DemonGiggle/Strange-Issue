all: a.opt.out a.out

a.opt.out: main.cpp
	g++ -O1 main.cpp -o a.opt.out

a.out: main.cpp 
	g++ main.cpp -o a.out

clean:
	rm -f a.out  a.opt.out
