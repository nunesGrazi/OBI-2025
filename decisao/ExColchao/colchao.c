#include <stdio.h>

int main() {

    int A, B, C, H, L;
    char res = 'N';

    scanf("%d %d %d", &A, &B, &C); //3 dimensoes do colchao - A: altura, B: largura, C: comprimento
    scanf("%d %d", &H, &L); //altura e largura

    if ((B <= H && C <= L) || (C <= H && B <= L) ||
        (A <= H && C <= L) || (C <= H && A <= L) ||
        (A <= H && B <= L) || (B <= H && A <= L)) {
        res = 'S';
    }

    printf("%c\n", res);

    return 0;
}
