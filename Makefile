all: stack.cc unit.cc 
	g++ -Wall -g -o stack main.cc stack.cc unit.cc

clean:
	-rm stack
