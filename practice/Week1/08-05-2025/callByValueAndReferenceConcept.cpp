#include <iostream>
using namespace std;
void swap(int *, int *);
void setValue(int *, int *, int, int);
void increment(int *num1, int *num2);
void decrement(int *num1, int *num2);
int main()
{
    int num1 = 5345, num2 = 4532;
    int value1, value2;
    cout << "Enter value for num1 :";
    cin >> value1;
    cout << "Enter value for num2 :";
    cin >> value2;
    setValue(&num1, &num2, value1, value2);
    int choice;
    bool flag =true;
    while (flag)
    {

        cout << "1. Swap the values and print." << endl;
        cout << "2. Increment the values and print." << endl;
        cout << "3. Decrement the values and print." << endl;
        cout << "4. Exit"<<endl;
         cout << "Enter the choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            swap(&num1, &num2);
            cout << "num1 :" << num1 << endl;
            cout << "num2 :" << num2 << endl;
            break;
        case 2:
            increment(&num1, &num2);
            cout << "num1 after increment:" << num1 << endl;
            cout << "num2 after increment:" << num2 << endl;
            break;
        case 3:
            decrement(&num1, &num2);
            cout << "num1 after decrement :" << num1 << endl;
            cout << "num2 after decrement:" << num2 << endl;
            break;
        case 4: flag=false;
                break;
        default:
            break;
        }
       
    }

    return 0;
}
void setValue(int *num1, int *num2, int value1, int value2)
{
    *num1 = value1;
    *num2 = value2;
}
void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
void increment(int *num1, int *num2)
{
    (*num1)++;
    (*num2)++;
}
void decrement(int *num1, int *num2)
{
    (*num1)--;
    (*num2)--;
}