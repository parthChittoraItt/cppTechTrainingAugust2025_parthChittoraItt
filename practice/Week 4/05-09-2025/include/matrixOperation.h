#ifndef MATRIXOPERATION_H
#define MATRIXOPERATION_H

#include "matrix.h"

class MatrixOperation {
public:
    virtual void execute(Matrix &matrix1, Matrix &matrix2) = 0;
    
};

#endif
