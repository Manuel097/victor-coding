
/*arreglos, funciones y apuntadores*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 

void generarTemperaturas(float *temperaturas, int cantidad);
void analizarTemperaturas(float *temperaturas, int cantidad);
void mostrarMensajeAlerta();

 

int main() {
    float temperaturas[12];
    int cantidad = 12;

 

    srand(time(NULL));

 

    generarTemperaturas(temperaturas, cantidad);
    analizarTemperaturas(temperaturas, cantidad);

 

    return 0;
}

 

void generarTemperaturas(float *temperaturas, int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        temperaturas[i] = ((float)rand() / RAND_MAX) * 4 + 34; // Rango de 25 a 35 grados Celsius
        printf("Temperatura %d: %.2f°C\n", i+1, temperaturas[i]);
    }
}

 

void analizarTemperaturas(float *temperaturas, int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        if (temperaturas[i] > 37.0) {
            mostrarMensajeAlerta();
            break; // Termina el bucle al encontrar la primera temperatura con fiebre
        }
    }
}

 

void mostrarMensajeAlerta() {
    printf("Alerta! Fiebre detectada.\n");
}