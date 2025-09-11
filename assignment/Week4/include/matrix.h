#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
protected:
    double **value;
    long rows, columns;

public:
    Matrix(long row=0, long col=0);
    Matrix(const Matrix &other);
    Matrix& operator=(const Matrix &other);
    void setRows(long rows);
    void setColumns(long columns);
    long getColumns();
    long getRows();
    double **getValue();
    void assignMemory();
    void freeMemory();
    Matrix operator+(Matrix &matrix2);
    Matrix operator*(Matrix &matrix2);
    ~Matrix();
};
#endif