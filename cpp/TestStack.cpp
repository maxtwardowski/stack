#include <iostream>
#include "Stack.h"

#define STACK_ELEMS 16

using namespace std;

int main(int argc, char const *argv[]) {
	Stack myStack, myStack2;

	printf("isEmpty myStack: %d\n", myStack.isEmpty());
	printf("isEmpty myStack2: %d\n", myStack2.isEmpty());

	for (int i = 1; i <= STACK_ELEMS; i++) {
		myStack.push(i);
	}

	for (int i = 1; i <= STACK_ELEMS; i++) {
		myStack2.push(i * 2);
	}

	printf("isEmpty myStack: %d\n", myStack.isEmpty());
	printf("isEmpty myStack2: %d\n", myStack2.isEmpty());

	for (int i = 1; i <= STACK_ELEMS; i++) {
		printf("myStack: %d\n", myStack.pop());
	}

	for (int i = 1; i <= STACK_ELEMS; i++) {
		printf("myStack2: %d\n", myStack2.pop());
	}

	printf("isEmpty myStack: %d\n", myStack.isEmpty());
	printf("isEmpty myStack2: %d\n", myStack2.isEmpty());

	return 0;
}
