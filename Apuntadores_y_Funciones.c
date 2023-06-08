//Ejercicio://
//*Objetivo: Paso de apuntador de una función a la función principal, el apuntador apunta a un arreglo*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_NEUMATICOS 4
/* Función que simula la lectura de datos del sensor de presión de neumáticos*/

void leerPresionNeumaticos (int* arregloPresiones){
    int i;
    srand(time(NULL)); //inicializa la semilla aleatoria
    for (i=0; i<NUM_NEUMATICOS; i++)
    {
        arregloPresiones [i] = rand() % 50+20; //genera aleatorio 20
    } //fin del for
} //fin de la función

int main ()
{
int presionesNeumaticos[NUM_NEUMATICOS];
int i;
leerPresionNeumaticos (presionesNeumaticos);
printf ("PRESIONES DE LOS NEUMATICOS");
for (i = 0; i < NUM_NEUMATICOS; i++)
{
    printf("Neumático %d: %d PSI\n",i+1,presionesNeumaticos[i]);
}
return 0;
}


