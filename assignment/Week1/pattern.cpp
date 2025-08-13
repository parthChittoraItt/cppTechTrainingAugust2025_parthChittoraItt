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

int main()
{
    ll count;
    while (true)
    {
        cout << "\n1. Print Pattern" << endl;
        cout << "2. Exit" << endl;
        cout << "Enter choice :";
        int choice;
        cin >> choice;

        if (cin.fail()) // checks if the input failed
        {
            cin.clear();            // Clear error flag
            cin.ignore(1000, '\n'); // Discard invalid input
            cout << "Enter a valid choice.\n";
        }

        if (choice == 1)
        {   cin.ignore(1000,'\n');
            cout << "Enter the value of count (Poistive Integer): ";
            cin >> count;
            ll realCount = count * 2 + 1; // total rows to be printed
            if (count >= 0)
            { // printing upper portion
                for (ll i = 0; i <= count; i++)
                {
                    if (count % 2 == 1) // for odd count
                    {
                        printAlternateBits(i + 1);
                        printSpaces(2 * (count - i));
                        printAlternateBits(i + 1);
                        cout << endl;
                    }
                    else if (count % 2 == 0) // for even
                    {
                        if (i == count)
                        {
                            printAlternateBits(realCount);
                        }
                        else
                        {
                            printAlternateBits(i + 1);
                            printSpaces(2 * (count - i) - 1);
                            printAlternateBits(i + 1);
                        }
                        cout << endl;
                    }
                }
                // lower part
                for (ll i = count + 1; i < realCount; i++)
                {
                    if (count % 2 == 1)
                    {
                        printAlternateBits(realCount - i);
                        printSpaces(2 * (i - count));
                        printAlternateBits(realCount - i);
                        cout << endl;
                    }
                    else if (count % 2 == 0)
                    {
                        printAlternateBits(realCount - i);
                        printSpaces(2 * (i - count) - 1);
                        printAlternateBits(realCount - i);
                        cout << endl;
                    }
                }
            }
            else
            {
                cout << "Please enter a positive integer." << endl;
            }
        }
        else if (choice == 2)
            break;
        else cout<<"Enter a valid choice.\n";
        cin.ignore(100 ,'\n');
    }
    return 0;
}