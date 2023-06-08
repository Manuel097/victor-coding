#include <stdio.h>
#include <string.h>

//Definicion de la estructura person//
struct Persona {
    char nombre [50];
    int edad;
    float altura;
};

int main ()
{
    //Creo una variable de tipo Persona llamada personal
    struct Persona personal;

    //Modificar los elementos de la estructura
    strcpy(personal.nombre, "Pedro");
    personal.edad=20;
    personal.altura=1.70;

    //Imprimir los datos de las personas
    printf("Nombre: %s\n", personal.nombre);
    printf("Edad: %d\n", personal.edad);
    printf("Altura: %%.2f\n", personal.altura );

    return 0;
}