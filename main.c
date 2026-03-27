#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"
#define INDEX ((j * m->col) + i) // Simplifies the index formula

// Void function to print all elements
void printAllElement(Matrix *m) {
    for (int i = 0; i < m->col; i++){
        for (int j = 0; j < m->rows; j++) {
            printf("Column #%d, row #%d: %.2f \n", i + 1, j + 1, m->data[INDEX]);
        }
    }
}

// Void function to set all elements by user input
void inputAllElement(Matrix *m) {
    for (int i = 0; i < m->col; i++){
        for (int j = 0; j < m->rows; j++){
            printf("Input element for column #%d, row #%d: ", i + 1, j + 1);
            scanf("%f", &(m->data[INDEX]));
        }
    }
    printf("--------------\n");
}

int main () {

    Matrix *myMatrix1 = createMatrix(2, 2);
    Matrix *myMatrix2 = createMatrix(2, 2);
    Matrix *sumMatrix = createMatrix(2, 2);
    inputAllElement(myMatrix1);
    inputAllElement(myMatrix2);
    sumOfTwoMatrix(sumMatrix, myMatrix1, myMatrix2);
    printAllElement(sumMatrix);
    freeMatrix(myMatrix1);
    freeMatrix(myMatrix2);
    freeMatrix(sumMatrix);

    return 0;
}