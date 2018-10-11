#include <stdio.h>
#include "Stack.h"

#define STACK_ELEMS 16

int main(int argc, char const *argv[]) {
	Stack myStack, myStack2;

	init(&myStack);
	init(&myStack2);
	printf("isEmpty myStack: %d\n", isEmpty(&myStack));
	printf("isEmpty myStack2: %d\n", isEmpty(&myStack2));

	for (int i = 1; i <= STACK_ELEMS; i++) {
		push(&myStack, i);
	}

	for (int i = 1; i <= STACK_ELEMS; i++) {
		push(&myStack2, i * 2);
	}

	printf("isEmpty myStack: %d\n", isEmpty(&myStack));
	printf("isEmpty myStack2: %d\n", isEmpty(&myStack2));

	for (int i = 1; i <= STACK_ELEMS; i++) {
		printf("myStack: %d\n", pop(&myStack));
	}

	for (int i = 1; i <= STACK_ELEMS; i++) {
		printf("myStack2: %d\n", pop(&myStack2));
	}

	printf("isEmpty myStack: %d\n", isEmpty(&myStack));
	printf("isEmpty myStack2: %d\n", isEmpty(&myStack2));

	destroy(&myStack);
	destroy(&myStack2);
	return 0;
}
