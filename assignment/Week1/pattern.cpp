#include <iostream>
#define ll long long
using namespace std;
void printAlternateBits(ll n)
{
    short bit = 1;
    for (int i = 0; i < n; i++)
    {
        cout << bit;
        bit = bit ^ 1;
    }
}
void printSpaces(ll count)
{
    for (int i = 0; i < count; i++)
    {
        cout << " ";
    }
}
void printUpperPortion(ll count, ll totalRowsToPrint)
{
    for (ll row = 0; row <= count; row++)
    {
        if (count % 2 == 1)
        {
            printAlternateBits(row + 1);
            printSpaces(2 * (count - row));
            printAlternateBits(row + 1);
            cout << endl;
        }
        else if (count % 2 == 0)
        {
            if (row == count)
            {
                printAlternateBits(totalRowsToPrint);
            }
            else
            {
                printAlternateBits(row + 1);
                printSpaces(2 * (count - row) - 1);
                printAlternateBits(row + 1);
            }
            cout << endl;
        }
    }
}
void printLowerPortion(ll count, ll totalRowsToPrint)
{
    for (ll row = count + 1; row < totalRowsToPrint; row++)
    {
        if (count % 2 == 1)
        {
            printAlternateBits(totalRowsToPrint - row);
            printSpaces(2 * (row - count));
            printAlternateBits(totalRowsToPrint - row);
            cout << endl;
        }
        else if (count % 2 == 0)
        {
            printAlternateBits(totalRowsToPrint - row);
            printSpaces(2 * (row - count) - 1);
            printAlternateBits(totalRowsToPrint - row);
            cout << endl;
        }
    }
}
void printPattern()
{   cin.ignore(1000 , '\n');
    ll count{};
    cout << "Enter the value of count (Poistive Integer): ";
    cin >> count;
    cin.ignore();
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(1000, '\n');
    }
    ll totalRowsToPrint = count * 2 + 1;
    if (count >= 0)
    {
        printUpperPortion(count, totalRowsToPrint);
        printLowerPortion(count, totalRowsToPrint);
    }
    else
    {
        cout << "Please enter a positive integer." << endl;
    }
}

int main()
{
    while (true)
    {
        
        cout << "\n1. Print Pattern" << endl;
        cout << "2. Exit" << endl;
        cout << "Enter choice :";
        int choice;
        cin >> choice;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Enter integer only." << endl;
        }
        if (choice == 1)
        {
            printPattern();
        }
        else if (choice == 2)
        {
            break;
        }
        else
            cout << "Enter a valid choice.";
        cin.ignore(1000 , '\n');
    }
    return 0;
}