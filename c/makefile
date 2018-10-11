TestStack: TestStack.o Stack.o
	gcc -g $^ -o $@

Stack.o: Stack.c Stack.h
	gcc -c -g -Wall -pedantic $< -o $@

TestStack.o: TestStack.c Stack.h
	gcc -c -g -Wall -pedantic $< -o $@

.PHONY: clean

clean:
	-rm Stack.o TestStack.o TestStack
