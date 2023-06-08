#include <stdio.h>
#include <stdlib.h>


struct Persona
{
    char nombre [20];
    int edad;
};

int main (){
    struct Persona personal = ("Juan Lopez", 30);
    }
void moificarPersona (struct Persona *pPersona) {
    printf ("Ingrese el nombre");
    scanf ("%s", pPersona->nombre);
} 
