
#include "matrixOperation.h"
#include "matrix.h"

Matrix MatrixOperation::performAddition(Matrix &matrix1, Matrix &matrix2)
{
    return (matrix1 + matrix2);
}

Matrix MatrixOperation::performMultiplication(Matrix &matrix1, Matrix &matrix2)
{
    return (matrix1 * matrix2);
}
