#include <stdbool.h>

typedef struct {
	int size;
	int top;
	int * data;
} Stack;

void init(Stack * s);
void destroy(Stack * s);
void push(Stack * s, int element);
int pop(Stack * s);
bool isEmpty(Stack * s);
void memCheck(Stack * s);