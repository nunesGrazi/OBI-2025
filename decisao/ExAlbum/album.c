#include <stdio.h>

int main() {

    int X, Y, H1, H2, L1, L2;
    char res = 'N';

    scanf("%d %d", &X, &Y); // Largura e altura da página do álbum
    scanf("%d %d", &L1, &H1); // Largura e altura da foto 1
    scanf("%d %d", &L2, &H2); // Largura e altura da foto 2

    if ((L1 + L2 <= X && H1 <= Y && H2 <= Y) ||
        (H1 + H2 <= Y && L1 <= X && L2 <= X) ||
        (L1 + H2 <= X && H1 <= Y && L2 <= Y) ||
        (H1 + L2 <= Y && L1 <= X && H2 <= X) ||
        (H1 + H2 <= X && L1 <= Y && L2 <= Y) ||
        (L1 + L2 <= Y && H1 <= X && H2 <= X)) {
        res = 'S';
    }

    printf("%c\n", res);

    return 0;
}
