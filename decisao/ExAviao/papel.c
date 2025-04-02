#include <stdio.h>

int main() {

    int C, P, F;
    char res = 'N';

    scanf("%d %d", &C, &P, &F); // Competidores, Total de Folhas, Qt por aluno

    if (C * F <= P) {
        res = 'S';
    }

    printf("%c\n", res);

    return 0;
}
