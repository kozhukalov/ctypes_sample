#include <stdio.h>

void myfunc() {
  printf("Hello from myfunc\n");
}

int myfunc_with_args(int a, int b) {
  printf("Hello from myfunc_with_args a=%d b=%d\n");
  return a + b;
}
