#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Stack.h"
#include <assert.h>

#define SIZE 5

void init(Stack * s) {
  s->top = 0;
  s->data = (int *) calloc(SIZE, sizeof(int));
}

void destroy(Stack * s) {
  if (s->top < 0) {
    printf("Stack has already been destroyed/hasn't been initialized yet\n");
    abort();
  }
  s->top = -1;
  free(s->data);
}

void push(Stack * s, int element) {
  if (!(s->top % SIZE) && s->top) {
    s->data = (int *) realloc(s->data, sizeof(int) * SIZE * (1 + (int) s->top / SIZE));
  }
  s->data[s->top] = element;
  s->top++;
}

int pop(Stack * s) {
  if (s->top <= 0) {
    printf("Stack is empty!\n");
    abort();
  }
  s->top--;
  return s->data[s->top];
}

bool isEmpty(Stack * s) {
  return s->top > 0 ? false : true;
}