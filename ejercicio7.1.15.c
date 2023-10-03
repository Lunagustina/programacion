#include<stdio.h>

void informarPromedio(int[], int[], int);
void informarMaximo(int[], int[], int);
void informarStock(int[], int[], int);
int verifRango(int, int, int);
int busqueda(int[], int, int);
void ventasDiarias(int[], int[], int);
int mayorIgual_0();
int verifRango2(int, int);
void cargaVecParalelos(int[], int[], int);

int main()
{
    int vec_cod[5];
    int vec_stock[5];
    int cod_M;

    printf("Ingrese el codigo y stock de los 5 productos\n");
    cargaVecParalelos(vec_cod, vec_stock, 5);

    printf("Ingrese el codigo y las ventas de los productos\n");
    ventasDiarias(vec_cod, vec_stock, 5);

    informarStock(vec_cod, vec_stock, 5);

    informarMaximo(vec_cod, vec_stock, 5);

    informarPromedio(vec_cod, vec_stock, 5);


    return 0;
}


int verifRango2(int lim_inf, int lim_sup)
{
    int cant;

    do{
        scanf("%d", &cant);

    }while(cant<lim_inf || cant>lim_sup);

    return cant;
}

int mayorIgual_0()
{
    int stock;

    do{
        printf("Ingrese el stock: \n");
        scanf("%d", &stock);

    }while(stock<0);

    return stock;
}


void cargaVecParalelos(int vec_cod[], int vec_stock[], int ce)
{
    int cod;
    int stock;

    for(int i=0; i<ce; i++)
    {
        cod= verifRango2(301, 900);
        stock= mayorIgual_0();

        vec_cod[i]=cod;
        vec_stock[i]=stock;

    }
    return 0;
}


void ventasDiarias(int vec_cod[], int vec_stock[], int ce)
{
    int cod;
    int i=0;
    int cant;
    int pos;

    cod= verifRango(301, 900, 0);

    while(cod!=0 && i<5)
    {
        printf("Ingrese la cantidad vendida\n");
        cant=verifRango2(1, 150);

        pos= busqueda(vec_cod, cod, 5);

        if(vec_stock[pos]>cant)
        {
            vec_stock-=cant;
        }

        i++;

        cod= verifRango(301, 900, 0);

    }
    return 0;
}

int verifRango(int lim_inf, int lim_sup, int cf)
{
    int cod;

    do{
        printf("Ingrese el codigo: \n");
        scanf("%d", &cod);

        if(cod==0)
        {
            return cod;
        }

    }while(cod<lim_inf || cod>lim_sup);

    return cod;
}



int busqueda(int vec_cod[], int cod, int ce)
{
    int i=0;
    int pos=-1;

    while(pos==-1 && i<ce)
    {
        if(vec_cod[i]==cod)
        {
            pos=i;
        }

    i++;
    }
    return pos;
}

void informarStock(int vec_cod[], int vec_stock[], int ce)
{
    for(int i=0; i<ce; i++)
    {
        printf("Codigo: %d\t Stock: %d\n", vec_cod[i], vec_stock[i]);
    }
    return 0;
}

void informarMaximo(int vec_cod[], int vec_stock[], int ce)
{
    int M;
    int cod_M;

    for(int i=0; i<ce; i++)
    {
        if(i==0 ||  vec_stock[i]>M)
        {
            M= vec_stock[i];
            cod_M= vec_cod[i];
        }
    }
    printf("El codigo del producto de stock mas alto es: %d\n", cod_M);
}

void informarPromedio(int vec_cod[], int vec_stock[], int ce)
{
    int acum=0;
    float promedio;

    for(int i=0; i<ce; i++)
    {
        acum+=vec_stock[i];
    }
    promedio= acum/ce;

    for(int i=0; i<ce; i++)
    {
        if(vec_stock[i]>promedio)
        {
            printf("Producto que supera promedio: %d\n", vec_cod[i]);
        }
        else
        {
            printf("No hay producto que supere el promedio\n");
        }
    }
    return 0;
}
