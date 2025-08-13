#include <stdio.h>

int main(){

  int numeros[4] = {3,4,5,7};

  int a = numeros[0];
  int b = numeros[1];
  int c = numeros[2];
  int d = numeros[3];

  int e;

  e = (a + b) * c / d;
  printf("1. e = (a+b)*c/d=%d\n", e);

  e = ((a + b) * c) / d;
  printf("1. e = ((a+b)*c)/d=%d\n", e);

  e = a + b * c / d;
  printf("1. e = a+b*c/d=%d\n", e);

  e = a + (b * c) / d;
  printf("1. e = a+(b*c)/d=%d\n", e);

   return 0;
}