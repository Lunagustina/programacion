#include <stdio.h>

// declare functions

void cargar (int v[], int ce);
void intercalar (int v1[], int v2[], int v_inter[], int ce);
void mostrar (int v[], int ce);

//main

int main()

{
int v1[5], v2[5], v_inter[10];

printf ("Cargue matriz 1\n");
cargar (v1,5);

printf ("Cargue matriz 2\n");
cargar (v2,5);
intercalar (v1, v2, v_inter,5);
mostrar (v_inter,10);

return 0;
}

//function's definition

void cargar (int v[], int ce)

{
    for (int i=0 ; i<ce ; i++)
        {
        printf ("Ingrese un valor: ");
        scanf ("%d", &v[i]);
        }
}

void intercalar (int v1[], int v2[], int v_inter[], int ce)
{
    for (int i=0 ; i<ce ; i++)
        {
        v_inter[2*i] = v1 [i];
        v_inter [(2*i)+1] = v2 [i];
        }
}

void mostrar (int v[], int ce)
{
printf ("Vector intercalado: \n");

    for ( int i=0 ; i<ce ; i++)
        {
        printf ("[%d] \t %d \n", i, v[i]);
        }
}
