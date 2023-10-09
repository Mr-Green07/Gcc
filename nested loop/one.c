#include <stdio.h>

int main() {
    int p;
  for (int i = 0; i < 5; i++) {
    for (int j = p; j< 5; j++){
        printf(" ");
    }
    for (int j = i; j < 5; j++) {
      printf("*");
    }
    printf("\n");
    p = p + 1;
  } 

  return 0;
}