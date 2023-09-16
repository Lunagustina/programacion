#include <stdio.h>

int LeerYValidar (int lim_inf, int lim_sup);

int EstaDentroDelRango(int num_val, int lim_inf, int lim_sup);

const int LIM_MAX = 2000;

int main()
{
    int cont_100_500= 0;
    int cont_500_1200= 0;
    int cont_1200_2000= 0;
    int acum_prom = 0;
    int entre_100_500;
    int entre_500_1200;
    int entre_1200_2000;

    int num = LeerYValidar(100, LIM_MAX);

    while(num!=99)
    {
        entre_100_500 = EstaDentroDelRango(num, 100, 500);
        entre_500_1200 = EstaDentroDelRango(num, 500, 1200);
        entre_1200_2000 = EstaDentroDelRango (num, 1200, 2000);

        if (entre_100_500==1)
        {
            cont_100_500++;
        }

        if (entre_500_1200==1 && num%2==0)
        {
            cont_500_1200++;
        }

        if (entre_1200_2000==1)
        {
            cont_1200_2000++;
            acum_prom+=num;
        }

        num = LeerYValidar(100, LIM_MAX);
    }

    printf ("Cantidad de numeros entre 100 y 500: %d\n", cont_100_500);
    printf ("Cantidad de numeros pares entre 500 y 1200: %d\n", cont_500_1200);

    if (cont_1200_2000>0)
    {
        printf ("Promedio de numeros entre 1200 y 2000: %d\n", acum_prom / cont_1200_2000);
    }
    else
    {
        printf ("No hay numeros ingresados entre el 1200 y 2000");
    }
}

int EstaDentroDelRango(int num_val, int lim_inf, int lim_sup)
{
    if(num_val>=lim_inf && num_val<= lim_sup)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int LeerYValidar (int lim_inf, int lim_sup)
{
    int result;
    int num_val;

    do {
        printf ("Ingrese un numero entero entre 100 y 2000: ");
        scanf ("%d", &num_val);

        if(num_val == 99)
        {
            return num_val;
        }

        result = EstaDentroDelRango(num_val, lim_inf, lim_sup);
    }
    while (result==0);

    return num_val;
}
