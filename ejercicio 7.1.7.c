#include<stdio.h>

int verif_sueldo();
int verif_dni(int lim_inf, int lim_sup, int cf);
int verif_sector(int lim_inf, int lim_sup);
void CuentaPorSector(int sector, int contar_sectores[]);
int TotalAPagar(int vec_sueldo[], int ce);
void CargaEmpleados(int vec_dni, int vec_sector, int vec_sueldo, int ce);

int main()
{
    int ce = 100;
    int vec_dni[100]={0};
    int vec_sector[100]={0};
    int vec_sueldo[100]={0};

    int contar_sectores[5]= {0};

    CargaEmpleados(vec_dni, vec_sector, vec_sueldo, ce);

    cuentaPorSector(vec_sector, contar_sectores, ce);

    for (int i=0 ; i < 5 ; i ++)
    {
        printf("%d", contar_sectores[i]);
    }



return 0;
}



int verif_sueldo()
{
    int sueldo;
    do
    {
        printf("Ingrese el sueldo");
        scanf("%d", &sueldo);
    }while(sueldo<0);

return sueldo;
}

int verif_dni(int lim_inf, int lim_sup, int cf)
{
    int dni;
    do{
        printf("Ingrese el DNI");
        scanf("%d", &dni);

        if(dni==99)
        {
            return dni;
        }

    }while(dni<lim_inf || dni>lim_sup);

    return dni;

}

int verif_sector(int lim_inf, int lim_sup)
{
    int sector;
    do{
        printf("Ingrese el sector");
        scanf("%d", &sector);

    }while(sector<lim_inf || sector> lim_sup);

return sector;

}

void CuentaPorSector(int sector_emp[], int contar_sectores[], int ce)
{
    for (int i=0 ; i < ce ; i ++)
    {
        int sector = sector_emp[i];
        contar_sectores[sector -1]++ ;
    }
}

int TotalAPagar(int vec_sueldo[], int ce)
{
    int total=0;

    for(int i=0; i<ce; i++)
    {
        total+=vec_sueldo[i];
    }

    return total;
}
void CargaEmpleados(int vec_dni, int vec_sector, int vec_sueldo, int ce)
{
    int i= 0;

    dni= verif_dni(10000000, 80000000, 99);

    while(dni!=99)
    {
        vec_dni[i] = dni;

        sector= verif_sector(1,5);
        vec_sector[i] = sector;

        sueldo= verif_sueldo();
        vec_sueldo[i] = sueldo;

        i++

        dni= verif_dni(10000000, 80000000, 99);

    }

    return 0;
}

