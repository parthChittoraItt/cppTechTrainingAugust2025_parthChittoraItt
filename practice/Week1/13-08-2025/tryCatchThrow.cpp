#include <iostream>
using namespace std;

int main() {

    double num, denm, divide;

    cout << "Enter numerator: ";
    cin >> num;

    cout << "Enter denominator ";
    cin >> denm;

    try {
        if (denm == 0)
            throw 0;
        divide = num / denm;
        cout << "Result :" << divide << endl;
    } 

    catch (int e) {
        cout << "Error: Cannot divide by 0 " << endl;
    }

    return 0;
}