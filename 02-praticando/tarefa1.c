// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa1.c"

#include <stdio.h>

int main() {
    int s = 0;
    int i = 1;

    while (i <= 10) {
        s += i;
        i++;
    }

    printf("Valor da soma de 1 até 10: %d\n", s);

    // TODO: corrija o código acima e use printf para
    // mostrar a soma de 1 a 10

    return 0;
}
