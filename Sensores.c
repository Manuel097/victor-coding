#include <stdio.h>
#define MAX_SENSORES 5
// Definición de estructura para el sensor de freno
struct SensorFreno {
    int id;
    float presion;
    char ubicacion[20];
};



 

int main() {
    // Declaración e inicialización del arreglo de sensores de freno
    struct SensorFreno sensores[MAX_SENSORES] = {
        {1, 30.5, "Delantero izquierdo"},
        {2, 28.3, "Delantero derecho"},
        {3, 31.2, "Trasero izquierdo"},
        {4, 29.8, "Trasero derecho"},
        {5, 27.6, "Freno de mano"}
    };
    
    // Recorrer el arreglo de sensores y mostrar los datos de cada uno
    for (int i = 0; i < MAX_SENSORES; i++) {
        printf("Sensor de freno ID: %d\n", sensores[i].id);
        printf("Presion del sensor: %.2f\n", sensores[i].presion);
        printf("Ubicacion del sensor: %s\n", sensores[i].ubicacion);
        printf("\n");
    }
    
    return 0;
}