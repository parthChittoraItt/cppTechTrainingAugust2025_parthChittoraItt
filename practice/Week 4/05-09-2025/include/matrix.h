#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
protected:
    double **value;
    long rows, columns;
    void assignMemory();
    void freeMemory();

public:
    void inputMatrixDimensions();
    void printMatrix();
    void inputMatrixValues();
    Matrix();
    Matrix(long row, long col);
    void setRows(long rows);
    void setColumns(long columns);
    long getColumns();
    long getRows();
    double **getValue();
    Matrix operator+(Matrix &matrix2);
    Matrix operator*(Matrix &matrix2);
    ~Matrix();
};
#endif