#include <stdio.h>

int EsCodigoValido(int codigo) {
    // Verificar si el código tiene exactamente 4 dígitos
    if (codigo >= 1000 && codigo <= 9999) {
        // Extraer los dígitos individuales
        int digito1 = codigo / 1000;
        int digito2 = (codigo / 100) % 10;
        int digito3 = (codigo / 10) % 10;
        int digito4 = codigo % 10;

        // Verificar si los dígitos son todos distintos entre sí y no son consecutivos
        if ((digito1 != digito2 && digito1 != digito3 && digito1 != digito4 &&
             digito2 != digito3 && digito2 != digito4 &&
             digito3 != digito4) &&
            (digito1 + 1 != digito2 && digito1 + 1 != digito3 && digito1 + 1 != digito4 &&
             digito2 + 1 != digito3 && digito2 + 1 != digito4 &&
             digito3 + 1 != digito4)) {
            return 1; // El código es válido
        }
    }
    return 0; // El código no es válido
}

int main() {
    // Unit tests for EsCodigoValido function
    printf("EsCodigoValido(1357) = %d\n", EsCodigoValido(1357)); // Válido
    printf("EsCodigoValido(2468) = %d\n", EsCodigoValido(2468)); // Válido
    printf("EsCodigoValido(1234) = %d\n", EsCodigoValido(1234)); // Inválido
    printf("EsCodigoValido(1358) = %d\n", EsCodigoValido(1358)); // Válido
    printf("EsCodigoValido(1583) = %d\n", EsCodigoValido(1583)); // Válido
    printf("EsCodigoValido(1283) = %d\n", EsCodigoValido(1283)); // Inválido
    printf("EsCodigoValido(9999) = %d\n", EsCodigoValido(9999)); // Inválido
    printf("EsCodigoValido(10000) = %d\n", EsCodigoValido(10000)); // Inválido
    printf("EsCodigoValido(123) = %d\n", EsCodigoValido(123)); // Inválido

    return 0;
}
