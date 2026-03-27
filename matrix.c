#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

// Define function for properties of matrix (row and column)
Matrix *createMatrix (int r, int c) {       
    Matrix *m = malloc(sizeof(Matrix));
    m->rows = r;
    m->col = c;
    m->data = calloc((r * c), sizeof(float));
}

// Formula for index = (r * m->col) + c
// Define function to set the element
void setElement(Matrix *m, int r, int c, float value){
    m->data[(r * m->col) + c] = value;
}

// Define function to access an element
float accessElement(Matrix *m, int r, int c){
    return m->data[(r * m->col) + c];
}

// Define function to free memory
void freeMatrix(Matrix *m) {
    free(m);
    free(m->data);
}

// Define function for addition operations between 2 matrices
void sumOfTwoMatrix(Matrix *resultantMatrix, Matrix *m1, Matrix *m2){
    if (resultantMatrix->rows == m1->rows && resultantMatrix->rows == m2->rows && resultantMatrix->col == m1->col && resultantMatrix->col == m2->col && m1->rows == m2->rows && m1->col == m2->col){
        for (int i = 0; i < m1->col; i++) {
            for (int j = 0; j < m1->rows; j++){
                resultantMatrix->data[(j * m1->col) + i] = m1->data[((j * m1->col) + i)] + m2->data[(j * m1->col) + i];
            }
        }
    } else {
        printf("The two matrices cannot be added! Check order of all matrices involved.\n");
    }
}