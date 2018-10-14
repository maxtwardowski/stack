#include <iostream>
#include "Stack.h"

#define STACK_ELEMS 75

using namespace std;

int main(int argc, char const *argv[]) {
	Stack myStack, myStack2;

	cout << "isEmpty myStack: " << myStack.isEmpty() << endl;
	cout << "isEmpty myStack2: " << myStack2.isEmpty() << endl;

	for (int i = 1; i <= STACK_ELEMS; i++) {
		myStack.push(i);
	}

	for (int i = 1; i <= STACK_ELEMS; i++) {
		myStack2.push(i * 2);
	}

	cout << "isEmpty myStack: " << myStack.isEmpty() << endl;
	cout << "isEmpty myStack2: " << myStack2.isEmpty() << endl;

	for (int i = 1; i <= STACK_ELEMS; i++) {
		cout << "myStack: " << myStack.pop() << endl;
	}

	for (int i = 1; i <= STACK_ELEMS; i++) {
		cout << "myStack2: " << myStack2.pop() << endl;
	}

	cout << "isEmpty myStack: " << myStack.isEmpty() << endl;
	cout << "isEmpty myStack2: " << myStack2.isEmpty() << endl;

	return 0;
}
