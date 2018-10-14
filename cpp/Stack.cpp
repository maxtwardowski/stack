#include <iostream>
#include "Stack.h"

using namespace std;

#define SIZE 5

Stack::Stack() {
	this->size = SIZE;
	this->top = 0;
	this->data = (int *) malloc(sizeof(int) * SIZE);
	this->memCheck();
}

Stack::~Stack() {
	free(this->data);
	cout << "Stack has been destroyed" << endl;
}

void Stack::push(int element) {
	const int growth_rate = 2;
	if (this->top >= this->size && this->top) {
		this->data = (int *) realloc(this->data, sizeof(int) * growth_rate * this->size);
		this->size *= growth_rate;
		printf("REALLOCED\n");
		this->memCheck();
	}
	this->data[this->top++] = element;
}

int Stack::pop() {
	if (this->isEmpty() || this->data == NULL) {
		printf("Stack is empty!\n");
		abort();
	}
	this->top--;
	return this->data[this->top];
}

bool Stack::isEmpty() {
	this->memCheck();
	return this->top > 0 ? false : true;
}

void Stack::memCheck() {
	if (this->data == NULL) {
		printf("Memory allocation error");
		abort();
	}
}