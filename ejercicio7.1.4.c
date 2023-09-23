int vec_iguales (int v1[], int v2[], int ce);
void carga (int v1[], int ce);

int main()
{

int ce = 10;
int v1[10] = {10, 5, 20, 8, 15, 12, 7, 3, 9, 11};
int v2[10] = {10, 5, 20, 8, 15, 12, 7, 3, 9, 11};

carga(v1[], ce);
carga(v2[], ce);
igual_dist = vec_iguales(v1[], v2[], ce);

if (igual_dist==1)
    {
    printf("Los vectores son iguales");
    }
else
    {
    printf("Los vectores son distintos");
    }
}

int vec_iguales (int v1[], int v2[], int ce)
{
    for(i=0 ; i<ce ; i++)
    {
        if (v1[i]!=v2[i])
        {
        return 0;
        }
    }
    return 1;
}

void carga (int v1[], int ce)
{
for (i=0 ; i < ce ; i++)
    {
    printf ("Ingrese un valor: ");
    scanf ("%d", &v[]);
    }
}
