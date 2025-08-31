#include "checkMatrixOperationValidity.h"

bool canAdd(long rowsMatrix1, long colsMatrix1, long rowsMatrix2, long colsMatrix2) {
    return (rowsMatrix1 == rowsMatrix2) && (colsMatrix1 == colsMatrix2);
}
bool canMultiply(long colsMatrix1, long rowsMatrix2) {
    return colsMatrix1 == rowsMatrix2;
}

// Dont want to modify values so not passed by reference