#ifndef MATRIXCALCULATOR_H
#define MATRIXCALCULATOR_H
#include "matrix.h"
class MatrixCalculator
{
private:
    long choice;

public:
    bool canAdd(Matrix &matrix1, Matrix &matrix2);
    bool canMultiply(Matrix &matrix1, Matrix &matrix2);
    Matrix calculate(long &choice, Matrix &matrix1, Matrix &matrix2);
};
#endif