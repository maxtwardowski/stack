#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

#define SIZE 5

void init(Stack * s) {
	s->size = SIZE;
	s->top = 0;
	s->data = (int *) malloc(SIZE * sizeof(int));
	memCheck(s);
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
	const int growth_rate = 2;
	if (s->top >= s->size && s->top) {
		s->data = (int *) realloc(s->data, sizeof(int) * growth_rate * s->size);
		s->size *= growth_rate;
		printf("REALLOCED\n");
		memCheck(s);
	}
	s->data[s->top++] = element;
}

int pop(Stack * s) {
	if (s->top <= 0) {
		printf("Stack is empty!\n");
		destroy(s);
		abort();
	}
	s->top--;
	return s->data[s->top];
}

bool isEmpty(Stack * s) {
	if (s->top < 0) {
		printf("Stack hasn't been inited");
		abort();
	}
	return s->top > 0 ? false : true;
}

void memCheck(Stack * s) {
	if (s->data == NULL) {
		printf("Memory allocation error");
		abort();
	}
}