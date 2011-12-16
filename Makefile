all: a.opt.out a.out

a.opt.out: main.cpp test.cpp
	g++ -O1 main.cpp test.cpp -o a.opt.out

a.out: main.cpp test.cpp
	g++ main.cpp test.cpp -o a.out

clean:
	rm -f a.out  a.opt.out
