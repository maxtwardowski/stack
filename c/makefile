TestStack: TestStack.o Stack.o
	gcc -g $^ -o $@ -lm

Stack.o: Stack.c Stack.h
	gcc -c -g -Wall -pedantic $< -o $@ -lm

TestStack.o: TestStack.c Stack.h
	gcc -c -g -Wall -pedantic $< -o $@ -lm

.PHONY: clean

clean:
	-rm Stack.o TestStack.o TestStack