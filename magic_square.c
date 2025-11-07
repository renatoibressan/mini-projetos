#include <stdio.h>

void eh_quadrado_magico(int m[10][10], int n, int *ref);

int main() {
    int n, i, j, m[10][10], ref;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    eh_quadrado_magico(m, n, &ref);
    printf("%d\n", ref);
    return 0;
}

void eh_quadrado_magico(int m[10][10], int n, int *ref) {
    int i, j, soma_referencia, soma_linha, soma_coluna, soma_diagonal;
    soma_referencia = 0;
    for (i = 0; i < n; i++) {
        soma_referencia += m[i][i];
    }
    for (i = 0; i < n; i++) {
        soma_linha = 0;
        for (j = 0; j < n; j++) {
            soma_linha += m[i][j];
        }
        if (soma_linha != soma_referencia) {
            *ref = -1;
            break;
        }
    }
    for (i = 0; i < n; i++) {
        soma_coluna = 0;
        for (j = 0; j < n; j++) {
            soma_coluna += m[j][i];
        }
        if (soma_coluna != soma_referencia) {
            *ref = -1;
            break;
        }
    }
    soma_diagonal = 0;
    for (i = 0; i < n; i++) {
        soma_diagonal += m[i][n - 1 - i];
    }
    if (soma_diagonal != soma_referencia) *ref -1;
    if (*ref == -1) return;
    else *ref = soma_referencia;
}