#include <iostream>
#include "Stack.h"

using namespace std;

int main(int argc, char const *argv[]) {
  Stack myStack;

  for (int i = 0; i < 50; i++) {
    myStack.push(i);
  }

  for (int i = 0; i < 50; i++) {
    cout << myStack.pop() << endl;
  }

  return 0;
}
