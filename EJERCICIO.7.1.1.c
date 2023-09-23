
#include <stdio.h>

void invertir(int vec_a[], int vec_b[], int ce);

int main()
{
    int ce = 10;
    int vec1[10] = {10, 5, 20, 8, 15, 12, 7, 3, 9, 11}; // Initialize vec1 with values
    int vec2[10];

    //llamar a la funcion carga
    //carga(vec1, ce);


// Call the vec_c function
    invertir(vec1, vec2, ce);

    printf("vec2: ");
    for (int i = 0; i < ce; i++)
    {
        printf("%d ", vec2[i]);
    }

    return 0;
}

void invertir(int vec_a[], int vec_b[], int ce)
{
    for (int i = 0; i < ce; i++)
    {
        vec_b[ce - 1 - i] = vec_a[i];
    }
}
