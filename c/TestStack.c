#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

int main(int argc, char const *argv[]) {
  Stack myStack;
  init(&myStack);
  printf("isEmpty: %d\n", isEmpty(&myStack));

  for (int i = 0; i <= 150; i++) {
    push(&myStack, i);
  }

  printf("isEmpty: %d\n", isEmpty(&myStack));

  for (int i = 0; i <= 150; i++) {
    printf("%d\n", pop(&myStack));
  }

  printf("isEmpty: %d\n", isEmpty(&myStack));

  destroy(&myStack);
  return 0;
}
