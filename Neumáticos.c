#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_NEUMATICOS 4

// Función que simula la lectura de datos del sensor de presión de neumáticos
void leerPresionNeumaticos(int* arregloPresiones) {
    int i;
    srand(time(NULL)); // Inicializar la semilla aleatoria

    for (i = 0; i < NUM_NEUMATICOS; i++) {
        arregloPresiones[i] = rand() % 50 + 20; // Generar un número aleatorio entre 20 y 70
    }
}
//Función que evalúa la presión de los neumáticos y muestra los resultados //
void evaluarPresion(int* arregloPresiones){
    int i;
    char tipoAuto;
    int presionRecomendadaMin, presionRecomendadaMax;
    int fueraDeRango = 0;
    int fallaLlanta = 0;

    printf ("Ingrese el tipo de auto (a, b,c): ");
    scanf ("%c", &tipoAuto);

    switch (tipoAuto){
    case 'a':
        presionRecomendadaMin = 30;
        presionRecomendadaMax = 35;
        break;
    case 'b':
        presionRecomendadaMin = 32;
        presionRecomendadaMax = 35;
        break;
    case 'c':
        presionRecomendadaMin = 35;
        presionRecomendadaMax = 45;
        break;
    default:
        printf ("Tipo de auto no válido. \n");
        return;
    }
    for ( i = 0; i < NUM_NEUMATICOS; i++) 
    {
        if (arregloPresiones[i] <presionRecomendadaMin || arregloPresiones [i] > presionRecomendadaMax){
            fueraDeRango = 1;
            if (arregloPresiones[i]<presionRecomendadaMin){
                printf ("Neumatico %d por debajo del rango recomendado: %d PSI\n", i + 1, arregloPresiones[i]);
            }else {
                printf ("Neumatico %d por encima del rango recomendado: %d PSI\n", i + 1, arregloPresiones[i]);
            }
            }
            if (arregloPresiones[i] < 20 || arregloPresiones[i] > 70) {
                fallaLlanta = 1;
            }
            }
        if (fueraDeRango)
        {
            printf ("Al menos un neumatico esta fuera del rango recomendado. \n");
        }
        if (fallaLlanta)
        {
            printf ("Advertencia! se ha detectado una llanta con presion fuera del rango permitido. \n");
        }
            }

//Funcion que imprime el estado de cada una de las llantas//
void imprimirEstadoNeumaticos(int* arregloPresiones){
    int i;

    printf ("Estado de los neumaticos:\n");
    for ( i = 0; i < NUM_NEUMATICOS; i++)
    {
        printf ("Neumatico %d: %d PSI\n", i + 1, arregloPresiones[i]);
    }
    
}
        

int main() {
    int opcion;
    int salir = 0;
     
     while (!salir){
        mostrarMenu();
        printf ("Ingrese una opcion: ");
        scanf ("%d", &opcion);

        switch (leerPresionNeumaticos) {
            case 1:
            printf ("");
            
        }

     }
    int presionesNeumaticos[NUM_NEUMATICOS];
    int i;

    leerPresionNeumaticos(presionesNeumaticos);

    printf("Presiones de los neumáticos:\n");
    for (i = 0; i < NUM_NEUMATICOS; i++) {
        printf("Neumático %d: %d PSI\n", i + 1, presionesNeumaticos[i]);
    }

    return 0;
}