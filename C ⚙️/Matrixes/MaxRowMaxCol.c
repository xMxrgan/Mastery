/*
Scrivere un programma scomposto in funzioni che:
Definisce globalmente una matrice 4*4 di interi
 - Riempie la matrice con valori tra 0 e 10 (estremi compresi) rifiutando valori non validi
 - Stampa la matrice
 - Restituisce al main l’indice di riga e di colonna che hanno somma degli elementi massima (se esistono più righe e/o colonne con somma massima restituire la prima incontrata)
*/



#include <stdio.h>
#include <stdlib.h>                                             // Includes the rand() function

void view(int *matrix, int row, int col) {
    int r, c;
    for (r = 0; r < row; ++r) {
        for (c = 0; c < col; ++c) {
            printf("%d\t", *(matrix + r * col + c));
        }
        printf("\n");
    }
}

void maxRowCol(int *maxrow, int *maxcol, int *matrix, int row, int col) {
    *maxrow = 0;
    *maxcol = 0;
    int J;

    for (int r = 0; r < row; ++r) {
        J = 0;
        for (int c = 0; c < col; ++c) {
            J += *(matrix + r * col + c);
        }
        if (J > *maxrow) *maxrow = r;
    }

    for (int c = 0; c < col; ++c) {
        J = 0;
        for (int r = 0; r < row; ++r) {
            J += *(matrix + r * col + c);
        }
        if (J > *maxcol) *maxcol = c;
    }
}

int main() {
    int Row = 4, Col = 4;
    int Matrix[Row][Col];
    int Random;
    int MaxRow, MaxCol;

    printf("Please, give me your 4x4 matrix:\n");
    for (int r = 0; r < Row; ++r) {
        for (int c = 0; c < Col; ++c) {
            Random = rand() % 100;                             // From 0 to 10 (% 10)
            Matrix[r][c] = Random;
        }
    }

    view((int *)Matrix, Row, Col);
    maxRowCol(&MaxRow, &MaxCol, *Matrix, Row, Col);

    printf("The row with the higher sum is: %d, and the column is: %d", MaxRow, MaxCol);
}
