#include "Conversion.h"
#include <stdio.h>

void imprimirTablaFahrenheitACelsius() {
    printf("Tabla de Fahrenheit a Celsius:\n");
    printf("-----------------------------\n");
    printf("|  Fahrenheit  |   Celsius   |\n");
    printf("-----------------------------\n");
    for (int f = 0; f <= 100; f += 10) {
        double c = Celsius(f);
        printf("|   %d   |   %f   |\n", f, c);
    }
    printf("-----------------------------\n");
}

void imprimirTablaCelsiusAFahrenheit() {
    printf("Tabla de Celsius a Fahrenheit:\n");
    printf("-----------------------------\n");
    printf("|   Celsius   |  Fahrenheit |\n");
    printf("-----------------------------\n");
    for (int c = 0; c <= 100; c += 10) {
        double f = Fahrenheit(c);
        printf("|   %d   |   %f  |\n", c, f);
    }
    printf("-----------------------------\n");
}

int main() {
    imprimirTablaFahrenheitACelsius();
    printf("\n");
    imprimirTablaCelsiusAFahrenheit();

    return 0;
}