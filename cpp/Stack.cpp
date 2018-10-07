#include <iostream>
#include <stdio.h>
#include "Stack.h"

using namespace std;

#define SIZE 5

Stack::Stack() {
  this->top = 0;
  this->data = (int *) malloc(sizeof(int) * SIZE);
}

Stack::~Stack() {
  cout << "Stack has been destroyed.";
}

void Stack::push(int element) {
  if (!(this->top % SIZE) && this->top) {
    this->data = (int *) realloc(this->data, sizeof(int) * SIZE * (1 + (int) this->top / SIZE));
  }
  this->data[this->top] = element;
  this->top++;
}

int Stack::pop() {
  if (this->top <= 0) {
    printf("Stack is empty!\n");
    abort();
  }
  this->top--;
  return this->data[this->top];
}

bool Stack::isEmpty() {
  return this->top > 0 ? false : true;
}
