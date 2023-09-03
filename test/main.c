#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 0 ; i < 10 ; i++)
    {
        if (i % 2)
        {
            printf("Hello Agustina!: %d\n", i);
        }
        else
        {
            printf("Hello Lucas!: %d\n", i);
        }
    }
    
    return 0;
}
