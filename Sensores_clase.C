#include <stdio.h>
#include <stdlib.h>
#define MAX_SENSORES 5


//Definicion de estructura para el sensor de freno 
struct SensorFreno {
    int id;
    float presion;
    char ubicacion{20};
};

void initialzeSensores (struct SensorFRENO)