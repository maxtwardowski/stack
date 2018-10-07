TestStack: TestStack.o Stack.o
	g++ -g $^ -o $@

Stack.o: Stack.cpp Stack.h
	g++ -g -c -Wall -pedantic $< -o $@

TestStack.o: TestStack.cpp Stack.h
	g++ -g -c -Wall -pedantic $< -o $@

.PHONY: clean

clean:
	-rm Stack.o TestStack.o TestStack