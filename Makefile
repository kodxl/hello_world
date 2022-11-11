all: object
	g++ build/hello_world.o -o hello_world

object:
	mkdir build
	g++ -c hello_world.cpp -o build/hello_world.o

clean:
	rm build/*
	rmdir build
