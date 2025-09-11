#ifndef MATRIXOPERATION_H
#define MATRIXOPERATION_H

#include "matrix.h"

class MatrixOperation {
 public:
   Matrix performAddition(Matrix &matrix1, Matrix &matrix2);
   Matrix performMultiplication(Matrix &matrix1, Matrix &matrix2);
};

#endif
