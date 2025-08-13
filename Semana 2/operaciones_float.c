#include <stdio.h>

int main(){

  float numeros[4] = {3,4,5,7};

  float a = numeros[0];
  float b = numeros[1];
  float c = numeros[2];
  float d = numeros[3];

  float e;

  e = (a + b) * c / d;
  printf("1. e = (%.2f+%.2f)*%.2f/%.2f=%.2f\n", a,b,c,d,e);

  e = ((a + b) * c) / d;
  printf("2. e = ((%.2f+%.2f)*%.2f)/%.2f=%.2f\n", a,b,c,d,e);

  e = a + b * c / d;
  printf("3. e = %.2f+%.2f*%.2f/%.2f=%.2f\n", a,b,c,d,e);

  e = a + (b * c) / d;
  printf("4. e = %.2f+(%.2f*%.2f)/%.2f=%.2f\n", a,b,c,d,e);
   return 0;
}