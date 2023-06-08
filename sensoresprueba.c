#include <stdio.h>
#include <stdlib.h>
#define MAX_SENSORES 5

// Definición de estructura para el sensor de freno
struct SensorFreno {
    int id;
    float presion;
    char ubicacion[20];
};

// Declaración de funciones
void inicializarSensores(struct SensorFreno *sensores);
void imprimirSensores(struct SensorFreno *sensores);
void borrarSensores(struct SensorFreno *sensores);

int main() {
    struct SensorFreno sensores[MAX_SENSORES];
    int opcion;

    while (1) {
        printf("----- MENU -----\n");
        printf("1. Inicializar sensores\n");
        printf("2. Imprimir arreglo de sensores\n");
        printf("3. Borrar arreglo de sensores\n");
        printf("4. Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);
        printf("\n");

        switch (opcion) {
            case 1:
                inicializarSensores(sensores);
                break;
            case 2:
                imprimirSensores(sensores);
                break;
            case 3:
                borrarSensores(sensores);
                break;
            case 4:
                printf("Saliendo del programa...\n");
                exit(0);
            default:
                printf("Opción inválida. Por favor, seleccione una opción válida.\n\n");
                break;
        }
    }

    return 0;
}

void inicializarSensores(struct SensorFreno *sensores) {
    for (int i = 0; i < MAX_SENSORES; i++) {
        printf("Ingrese los datos del sensor %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &(sensores[i].id));
        printf("Presión: ");
        scanf("%f", &(sensores[i].presion));
        printf("Ubicación: ");
        scanf("%s", sensores[i].ubicacion);
        printf("\n");
    }
}

void imprimirSensores(struct SensorFreno *sensores) {
    printf("----- Arreglo de sensores -----\n");
    for (int i = 0; i < MAX_SENSORES; i++) {
        printf("Sensor de freno ID: %d\n", sensores[i].id);
        printf("Presión del sensor: %.2f\n", sensores[i].presion);
        printf("Ubicación del sensor: %s\n", sensores[i].ubicacion);
        printf("\n");
    }
}

void borrarSensores(struct SensorFreno *sensores) {
    for (int i = 0; i < MAX_SENSORES; i++) {
        sensores[i].id = 0;
        sensores[i].presion = 0.0;
        sensores[i].ubicacion[0] = '\0';
    }
    printf("Arreglo de sensores borrado.\n\n");
}
