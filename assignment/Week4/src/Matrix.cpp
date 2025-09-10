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
double **Matrix::getValue()
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
}

void Matrix::freeMemory()
{
    if (value != nullptr)
    {
        for (long i = 0; i < rows; i++)
        {
            delete[] value[i];
        }
        delete[] value;
        value = nullptr;
    }
}

Matrix::Matrix(long row, long col)
{
    if (row > 0 && col > 0)
    {
        this->rows = row;
        this->columns = col;
        this->value = nullptr;
        this->assignMemory();
    }
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
    if (value != nullptr)
        this->freeMemory();
}

Matrix::Matrix(const Matrix &matrix)
{
    rows = matrix.rows;
    columns = matrix.columns;
    if (rows > 0 && columns > 0)
    {
        assignMemory();
        for (long rowIterator = 0; rowIterator < rows; rowIterator++)
        {
            for (long colIterator = 0; colIterator < columns; colIterator++)
            {
                value[rowIterator][colIterator] = matrix.value[rowIterator][colIterator];
            }
        }
    }
    else
    {
        value = nullptr;
    }
}

Matrix &Matrix::operator=(const Matrix &matrix)
{
    if (this == &matrix)
        return *this;

    freeMemory();

    rows = matrix.rows;
    columns = matrix.columns;
    if (rows > 0 && columns > 0)
    {
        assignMemory();
        for (long rowIterator = 0; rowIterator < rows; rowIterator++)
        {
            for (long colIterator = 0; colIterator < columns; colIterator++)
            {
                value[rowIterator][colIterator] = matrix.value[rowIterator][colIterator];
            }
        }
    }
    else
    {
        value = nullptr;
    }
    return *this;
}
