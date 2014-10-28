all: stack.cc unit.cc 
	g++ -Wall -g -o stack stack.cc unit.cc

clean:
	-rm stack
