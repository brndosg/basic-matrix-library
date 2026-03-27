#ifndef MATRIX_H
#define MATRIX_H
#include <stdlib.h>

// Structure definition
typedef struct {
    int rows;
    int col;
    float *data;
} Matrix;

// Initial function prototype
Matrix *createMatrix (int r, int c);
void freeMatrix(Matrix *m);
void setElement(Matrix *m, int r, int c, float value);
float accessElement(Matrix *m, int r, int c);
void sumOfTwoMatrix(Matrix *resultantMatrix, Matrix *m1, Matrix *m2);
void multiplyTwoMatrix(Matrix *resultantMatrix, Matrix *m1, Matrix *m2);

#endif