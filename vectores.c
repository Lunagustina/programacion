#include <stdio.h>

void vec_c(int vec_a[], int vec_b[], int vec_c[], int ce);

int main()
{
    int ce = 10;
    int vec1[10] = {10, 5, 20, 8, 15, 12, 7, 3, 9, 11}; // Initialize vec1 with values
    int vec2[10] = {2, 7, 13, 6, 18, 4, 10, 1, 14, 17}; // Initialize vec2 with values
    int vec3[10];

// Call the vec_c function
    vec_c(vec1, vec2, vec3, ce);

    printf("vec3: ");
    for (int i = 0; i < ce; i++)
    {
        printf("%d ", vec3[i]);
    }

    return 0;
}

void vec_c(int vec_a[], int vec_b[], int vec_c[], int ce)
{
    for (int i = 0; i < ce; i++)
    {
        vec_c[i] = vec_a[i] + vec_b[i];
    }
}
