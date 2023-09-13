// Consigna

// Se realizo un concurso de tiro al blanco. Por cada participante se ingresa un numero que lo indica y el resultado de los disparos efectuados. El ingreso finaliza con un numero de participante negativo.
// Cada participante efectua 5 disparos, registrandose las coordenadas X-Y de cada disparo.

// - No considere disparos sobre los ejes, pero si en el centro (si es sobre los ejes las coordenadas deberan volver a ingresarse)
// - Para determinar el cuadrante utilizar la funcion CUADRANTE que reciba las dos coordenadas y retorne el cual pertenece (1 a 4) y 0 para indicar un tiro en el centro.

// Para calcular el puntaje utilizar la funcion PUNTAJE que reciba 5 parametros que representan la cantidad de disparos en cada cuadrante y en el centro. La funcion debe retornar el puntaje obtenido segun la siguiente escala:

// - Cuadrantes 1 y 2: 50 puntos
// - Cuadrantes 3 y 4: 40 puntos
// - Centro: 100 puntos

// Determinar
// a. Ek puntaje obtenido por cada participante, detallando cuantos disparos realizo en cada cuadrante.
// b. Mostrar el numero de participante ganador y el puntaje obtenido
// c. Calcular y mostrar la cantidad total de disparos en el centro (de todos los participantes)

#include <stdio.h>
#include <stdlib.h>

// Función para determinar el cuadrante
int CUADRANTE(int x, int y) {
    if (x == 0 || y == 0) {
        return 0; // Centro
    } else if (x > 0 && y > 0) {
        return 1; // Cuadrante 1
    } else if (x < 0 && y > 0) {
        return 2; // Cuadrante 2
    } else if (x < 0 && y < 0) {
        return 3; // Cuadrante 3
    } else {
        return 4; // Cuadrante 4
    }
}

// Función para calcular el puntaje
int PUNTAJE(int cuadrante1, int cuadrante2, int cuadrante3, int cuadrante4, int centro) {
    return cuadrante1 * 50 + cuadrante2 * 50 + cuadrante3 * 40 + cuadrante4 * 40 + centro * 100;
}

int main() {
    int numero_participante;
    int puntaje_maximo = -1;
    int ganador;
    int disparos_centro_total = 0;

    // printf("Ingrese el número del participante (negativo para terminar): ");
    // scanf("%d", &numero_participante);

    // Valores de entrada simulados para pruebas
    int valores_de_entrada[][5] = {
        {1, 2, 3, 4, 5},  // Participante 1
        {-1, -2, -3, -4, -5},  // Participante 2
    };

    // while (numero_participante >= 0)
    for (int p = 0; p < 2; p++)
    {
        int cuadrante1 = 0, cuadrante2 = 0, cuadrante3 = 0, cuadrante4 = 0, centro = 0;

        for (int i = 0; i < 5; i++)
        {
            int x, y;
            // printf("Ingrese las coordenadas X-Y del disparo %d para el participante %d: ", i + 1, numero_participante);
            // scanf("%d %d", &x, &y);

            int x = valores_de_entrada[p][i];
            int y = valores_de_entrada[p][i];

            int cuadrante = CUADRANTE(x, y);

            switch (cuadrante) {
                case 0:
                    centro++;
                    break;
                case 1:
                    cuadrante1++;
                    break;
                case 2:
                    cuadrante2++;
                    break;
                case 3:
                    cuadrante3++;
                    break;
                case 4:
                    cuadrante4++;
                    break;
                default:
                    printf("Coordenadas inválidas, vuelva a ingresar.\n");
                    i--;
            }
        }

        int puntaje = PUNTAJE(cuadrante1, cuadrante2, cuadrante3, cuadrante4, centro);

        printf("Puntaje del participante %d: %d (Cuadrante 1: %d, Cuadrante 2: %d, Cuadrante 3: %d, Cuadrante 4: %d, Centro: %d)\n", numero_participante, puntaje, cuadrante1, cuadrante2, cuadrante3, cuadrante4, centro);

        if (puntaje > puntaje_maximo) {
            puntaje_maximo = puntaje;
            ganador = numero_participante;
        }

        disparos_centro_total += centro;

        // printf("Ingrese el número del participante (negativo para terminar): ");
        // scanf("%d", &numero_participante);
    }

    printf("El participante ganador es el número %d con un puntaje de %d\n", ganador, puntaje_maximo);
    printf("La cantidad total de disparos en el centro es: %d\n", disparos_centro_total);

    return 0;
}
