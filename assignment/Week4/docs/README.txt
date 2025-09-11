Documentation of Week4Final Project

-> A constants.h file is created to put all strings used in the program together.

1. Class: Matrix (matrix.h / Matrix.cpp)

Purpose:


Represents a mathematical matrix and encapsulates matrix data and basic operations.


Functions:


protected : //only this class and the class inheriting can access it

    -assignMemory() : Allocates memory for the matrix
    -freeMemory() : Frees memory of the matrix

public : 
    -inputMatrixDimensions() : Takes input from the user to take matrix dimensions.
    -printMatrix() : Prints the matrix values
    -void inputMatrixValues() : Takes user input for the values of matrix 
    -Matrix() : Default Constructor
    -Matrix(long row, long col) : A paramaterized constructor for initializing "result" matrix directly
    -void setRows(long rows) : Setter to set value of private data "rows".
    -void setColumns(long columns): Setter to set value of private data "columns".
    -long getColumns(): Getter to get value of private data "rows".
    -long getRows() : Getter to get value of private data "columns".
    -double **getValue(): Getter to get value of private data "value".
    -Matrix operator+(Matrix &matrix2) : Operator overloading fn for +
    -Matrix operator*(Matrix &matrix2) : Operator overloading fn for *
    -~Matrix() : Destructor used to free memory assigned to matrix.


SRP :

This class only represents and manages matrix data and operations. 
It does not handle menu printing, or calculation logic.
Each function is dedicated to perform it's function only.


-----------------------------------------------------------------------------------------------------------


2. Class: MatrixOperation (matrixOperation.h)


Purpose:

Defines an abstract base class for matrix operations (addition, multiplication, etc.).


Functions:

virtual Matrix operate(const Matrix&, const Matrix&) = 0; → Pure virtual function to be implemented by specific operations.


SRP :

This class only defines an abstraction for operations.


-----------------------------------------------------------------------------------------------------------


3. Class: PerformAddition (performAddition.h / PerformAddition.cpp)


Purpose:

Implements the addition of two matrices.


Functions:

Matrix execute( Matrix& m1, Matrix& m2) : Returns a new matrix which is the sum of the two input matrices.


SRP :

This class only performs matrix addition.


-----------------------------------------------------------------------------------------------------------


4. Class: PerformMultiplication (performMultiplication.h / PerformMultiplication.cpp)

Purpose:

Implements the multiplication of two matrices.


Functions:


Matrix execute( Matrix& m1,  Matrix& m2) : Returns a new matrix which is the product of the two input matrices.


SRP :

This class only performs matrix multiplication.


-----------------------------------------------------------------------------------------------------------


5. Class: MatrixCalculator (matrixCalculator.h / MatrixCalculator.cpp)

Purpose:

Acts as the main application runner class to abstract the working from user (main).


Functions:


run(): Takes the operation choice and processes it. 


SRP : 
It calls methods to printMenu and process choice


-----------------------------------------------------------------------------------------------------------


6. Class: PrintMenu (printMenu.h / PrintMenu.cpp)


Purpose:

Displays menu to user.


Functions:

void printMenu(): Prints available options to the console.


SRP :

This class only prints the menu


-----------------------------------------------------------------------------------------------------------


7. Class: InputChoice (inputChoice.h / InputChoice.cpp)


Purpose:

Handles reading the user’s choice from input.

Functions:

private:
    static bool isValidPositiveLong(std::string &input, long &value) : Checks for positive long numbers.
    static bool isValidDouble(std::string &input, double &value) : Checks for valid double numbers.

public:
    static long inputLong() : Used to take input from the user for long
    static double inputDouble() : Used to take input from the user for double


SRP :

This class only reads user input, ensuring no overlap with calculation or display responsibilities.



-----------------------------------------------------------------------------------------------------------


8. Class: ProcessChoice (processChoice.h / ProcessChoice.cpp)


Purpose:

Handles logic for executing user’s chosen operation.



Functions:



void processChoice(long choice): Based on the user’s choice, calls the correct operation (addition, multiplication)



SRP :

This class only processes the user’s choice and maps it to operations, not performing the operation itself.


-----------------------------------------------------------------------------------------------------------


9. File: main.cpp


Purpose:

Entry point of the program. (USER)


SRP :

Main function only orchestrates program execution. 
It does not implement operations, ensuring separation of concerns.


-----------------------------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------------------






