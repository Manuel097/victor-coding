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
    int i;
    struct Persona personal [5];
    

    //Modificar los elementos de la estructura
    strcpy(personal.nombre, "Pedro");
    personal.edad=20;
    personal.altura=1.70;

    //Imprimir los datos de las personas
    for ( i = 0; i < 5; i++)
    {
    printf("Ingrese el nombre de la persona %d: ", i + 1);
    scanf ("%s", personas[i]. nombre);
    printf("Ingrese la edad de la persona %d: ", i + 1);
    scanf ("%d", personas[i]. nombre);
    
    
    
    return 0;
}