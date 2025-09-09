#include "matrix.h"
#include "constants.h"
#include <iostream>

void Matrix::setRows(long rows)
{
    this->rows = rows;
}
void Matrix::setColumns(long columns)
{
    this->columns = columns;
}
long Matrix::getColumns()
{
    return this->columns;
}
long Matrix::getRows()
{
    return this->rows;
}
double** Matrix::getValue()
{
    return this->value;
}

void Matrix::assignMemory()
{
    value = new double *[rows];
    for (long rowIterator = 0; rowIterator < rows; rowIterator++)
    {
        value[rowIterator] = new double[columns];
    }
    std::cout << memoryAssigned;
}

void Matrix::freeMemory()
{
    for (long rowIterator = 0; rowIterator < rows; rowIterator++)
        delete[] value[rowIterator];
    delete[] value;
    value = nullptr;
    std::cout << memoryFreed;
}

Matrix::Matrix()
{
  
}
Matrix::Matrix(long row, long col)
{
    this->rows = row;
    this->columns = col;
    this->assignMemory();
}

Matrix Matrix::operator+(Matrix &matrix2)
{
    Matrix result(rows, columns);
    for (int rowIterator = 0; rowIterator < rows; rowIterator++)
    {
        for (int colIterator = 0; colIterator < columns; colIterator++)
        {
            result.value[rowIterator][colIterator] = value[rowIterator][colIterator] + matrix2.value[rowIterator][colIterator];
        }
    }
    return result;
}

Matrix Matrix::operator*(Matrix &matrix2)
{
    Matrix result(rows, matrix2.columns);
    for (int rowIterator = 0; rowIterator < rows; rowIterator++)
    {
        for (int colIterator = 0; colIterator < matrix2.columns; colIterator++)
        {
            result.value[rowIterator][colIterator] = 0;
            for (int commonColumnIterator = 0; commonColumnIterator < columns; commonColumnIterator++)
            {
                result.value[rowIterator][colIterator] += value[rowIterator][commonColumnIterator] * matrix2.value[commonColumnIterator][colIterator];
            }
        }
    }
    return result;
}

Matrix::~Matrix()
{
    this->freeMemory();
}

