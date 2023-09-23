#include <stdio.h>

// declare functions

void cargar (int v[], int ce);
void intercalar (int v1[], int v2[], int v_inter[], int ce);
void mostrar (int v[], int ce);

//main

int main()

{
int v1[5], v2[5], v_inter[10];
void cargar (v1,5);
void cargar (v2,5);
void intercalar (v1, v2, v_inter,5);
void mostrar (v_inter,10)


return 0;
}

//function's definition

void cargar (int v[], int ce)

{
    for (int i=0 ; i<ce ; i++)
        printf ("Ingrese un valor\n");
        scanf ("%d", &v[i]);
        }
}

void intercalar (int v1[], int v2[], int v_inter[], int ce)
{
    for (int i=0 ; i<ce ; i++)
        {
        v_inter[2*i] = v1 [i];
        v_inter [(2*i)+1] = v2 (i);
        }
}

void mostrar (int v[], int ce)
{
printf ("Matriz intercalada: ");

    for ( int i=0 ; i<ce ; i++)
        {
        printf ("%d", &v[i]);
        }
}
