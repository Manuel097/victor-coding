#include <stdio.h>

 

#define TAMANO_ARREGLO 5

 

 

int main() {

 

int v[10];
int i, *p;

 

for (i=0; i < 10; i++) v[i] = i;

 

for (i=0; i < 10; i++) printf ("\n%d", v[i]);
p = v;
for (i=0; i < 10; i++) printf ("\n%d", *p++);
/* Tras cada p++ el puntero señala a la siguiente posición en v */

 

/*ejercicio: imprima las direcciones de cada posición del vector*/
/*¿son las mismas?

 

}


operaciones binarias (suma, resta, mult),
estructuras, mascaras(and y or) y apuntadores para examen proximo viernes