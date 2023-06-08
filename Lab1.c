#include <stdio.h>
#include <stdlib.h>

#define SIZE 12

// Función para simular la medición del sensor biomédico
void medirTemperatura(float *temperaturas) {
    int i;
    for (i = 0; i < SIZE; i++) {
        // Generar temperatura aleatoria entre 35.0 y 38.0
        temperaturas[i] = (rand() % 30) / 10.0 + 35.0;
    }
}

// Función para analizar el arreglo de temperaturas utilizando apuntadores
void analizarTemperaturas(float *temperaturas) {
    int i;
    float *ptr = temperaturas;
    
    printf("Temperaturas registradas:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%.1f ", *ptr);
        ptr++;
    }
    
    printf("\n");
}

// Función para analizar si la temperatura supera los 37 grados
void analizarFiebre(float *temperaturas) {
    int i;
    float *ptr = temperaturas;
    
    printf("Analisis de fiebre:\n");
    for (i = 0; i < SIZE; i++) {
        if (*ptr > 37.0) {
            printf("Fiebre detectada en el momento %d\n", i+1);
        }
        ptr++;
    }
}

int main() {
    float temperaturas[SIZE];
    
    // Simular la medición del sensor
    medirTemperatura(temperaturas);
    
    // Analizar el arreglo de temperaturas
    analizarTemperaturas(temperaturas);
    
    // Realizar el análisis de fiebre
    analizarFiebre(temperaturas);
    
    return 0;
}