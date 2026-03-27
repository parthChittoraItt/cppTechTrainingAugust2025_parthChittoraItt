#include "checkMatrixOperationValidity.h"
#include "matrix.h"

bool canAdd(matrix &matrix1, matrix &matrix2) {
    return (matrix1.row == matrix2.row) && (matrix1.col == matrix2.col);
}

bool canMultiply(matrix &matrix1, matrix &matrix2) {
    return matrix1.col == matrix2.row;
}
