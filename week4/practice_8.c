#include <stdio.h>

int main(void) {
  for (int i = 0; i < 100; i++) {
    if (i % 3 == 0 && i % 4 == 0 || i % 7 == 0){
      printf("%2d ", i);
    }
  }
}