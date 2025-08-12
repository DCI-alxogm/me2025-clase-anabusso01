#include <stdio.h>
#include <math.h>

int main() {
    // Declaramos un arreglo con 5 números flotantes
    float x[5] = {1.0, 2.5, 3.0, 4.2, 5.5};

    // Para x[0]
    printf("x = %.2f\n", x[0]);
    printf("f(x) = x^2 = %.2f\n", x[0] * x[0]);
    printf("f(x) = log(x+1) = %.4f\n", log(x[0] + 1));
    printf("f(x) = exp(x) + cos(x) = %.4f\n", exp(x[0]) + cos(x[0]));
    printf("------------------------\n");

    // Para x[1]
    printf("x = %.2f\n", x[1]);
    printf("f(x) = x^2 = %.2f\n", x[1] * x[1]);
    printf("f(x) = log(x+1) = %.4f\n", log(x[1] + 1));
    printf("f(x) = exp(x) + cos(x) = %.4f\n", exp(x[1]) + cos(x[1]));
    printf("------------------------\n");

    // Para x[2]
    printf("x = %.2f\n", x[2]);
    printf("f(x) = x^2 = %.2f\n", x[2] * x[2]);
    printf("f(x) = log(x+1) = %.4f\n", log(x[2] + 1));
    printf("f(x) = exp(x) + cos(x) = %.4f\n", exp(x[2]) + cos(x[2]));
    printf("------------------------\n");

    // Para x[3]
    printf("x = %.2f\n", x[3]);
    printf("f(x) = x^2 = %.2f\n", x[3] * x[3]);
    printf("f(x) = log(x+1) = %.4f\n", log(x[3] + 1));
    printf("f(x) = exp(x) + cos(x) = %.4f\n", exp(x[3]) + cos(x[3]));
    printf("------------------------\n");

    // Para x[4]
    printf("x = %.2f\n", x[4]);
    printf("f(x) = x^2 = %.2f\n", x[4] * x[4]);
    printf("f(x) = log(x+1) = %.4f\n", log(x[4] + 1));
    printf("f(x) = exp(x) + cos(x) = %.4f\n", exp(x[4]) + cos(x[4]));
    printf("------------------------\n");

    return 0;
}
