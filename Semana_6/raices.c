include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Constantes del problema
#define G 9.8      // gravedad m/s²
#define T 10.0     // tiempo en segundos
#define M 68.1     // masa en kg
#define V 40.0     // velocidad objetivo m/s
#define TOL 1e-6   // tolerancia
#define MAX_ITER 100 // máximo de iteraciones

// Función f(c) = (g*m/c)*(1 - exp(-c*t/m)) - v
double f(double c) {
    return (G * M / c) * (1 - exp(-c * T / M)) - V;
}

// Método de la falsa posición
double falsa_posicion(double a, double b) {
    double fa, fb, fc, c;
    int iter = 0;
    
    fa = f(a);
    fb = f(b);
    
    // Verificar cambio de signo
    if (fa * fb >= 0) {
        printf("Error: No hay cambio de signo en el intervalo [%.2f, %.2f]\n", a, b);
        exit(1);
    }
    
    printf("Iter\t  a\t\t  b\t\t  c\t\t  f(c)\t\tError\n");
    printf("------------------------------------------------------------------------\n");
    
    do {
        // Calcular punto de intersección
        c = (a * fb - b * fa) / (fb - fa);
        fc = f(c);
        
        // Mostrar resultados de la iteración
        printf("%3d\t%8.6f\t%8.6f\t%8.6f\t%8.6f\t", iter+1, a, b, c, fc);
        
        if (iter > 0) {
            printf("%8.6f\n", fabs(fc));
        } else {
            printf("   ---\n");
        }
        
        // Verificar convergencia
        if (fabs(fc) < TOL) {
            break;
        }
        
        // Actualizar intervalo
        if (fa * fc < 0) {
            b = c;
            fb = fc;
        } else {
            a = c;
            fa = fc;
        }
        
        iter++;
        
    } while (iter < MAX_ITER && fabs(fc) >= TOL);
    
    printf("------------------------------------------------------------------------\n");
    
    if (iter == MAX_ITER) {
        printf("Advertencia: Se alcanzó el máximo de iteraciones\n");
    }
    
    return c;
}

int main() {
    double a, b, raiz;
    
    printf("METODO DE LA FALSA POSICION\n");
    printf("============================\n");
    printf("Ecuacion: f(c) = (g*m/c)*(1 - exp(-c*t/m)) - v = 0\n");
    printf("Parametros: g = %.1f, m = %.1f, t = %.1f, v = %.1f\n\n", G, M, T, V);
    
    // Definir intervalo inicial [a, b]
    // Valores típicos para coeficiente de arrastre: 5-20 kg/s
    a = 5.0;
    b = 20.0;
    
    printf("Intervalo inicial: [%.1f, %.1f]\n", a, b);
    printf("Tolerancia: %.1e\n\n", TOL);
    
    // Aplicar método de la falsa posición
    raiz = falsa_posicion(a, b);
    
    printf("\nRESULTADO FINAL:\n");
    printf("Coeficiente de arrastre c = %.6f kg/s\n", raiz);
    printf("f(c) = %.6e\n", f(raiz));
    printf("Velocidad calculada: %.6f m/s\n", (G * M / raiz) * (1 - exp(-raiz * T / M)));
    
    return 0;
}
//hola