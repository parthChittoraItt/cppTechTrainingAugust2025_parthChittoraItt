#ifndef PEFORMADDITION_H
#define PEFORMADDITION_H
#include "matrix.h"
#include "matrixOperation.h"
class PerformAddition : public MatrixOperation
{
private:
    bool canAdd(Matrix &matrix1, Matrix &matrix2);

public:
    void execute(Matrix &matrix1, Matrix &matrix2);
};
#endif