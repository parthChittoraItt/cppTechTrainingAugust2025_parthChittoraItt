#ifndef MATRIXMEMORYMGMT_H
#define MATRIXMEMORYMGMT_H
double** getMatrixMemory(long rows, long cols);
void freeMatrixMemory(double** matrix, long rows);
#endif