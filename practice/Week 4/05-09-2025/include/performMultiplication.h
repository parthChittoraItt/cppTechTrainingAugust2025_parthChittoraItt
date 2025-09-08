#ifndef PERFORMMULTIPLICATION_H
#define PERFORMMULTIPLICATION_H
#include "matrix.h"
#include "matrixOperation.h"
class PerformMultiplication : public MatrixOperation
{
private:
    bool canMultiply(Matrix &matrix1, Matrix &matrix2);

public:
    void execute(Matrix &matrix1, Matrix &matrix2);
};
#endif