#include <iostream>
using namespace std;

int main() {
    int mat[2][3];
    cout << "Enter elements of 2x3 matrix:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            cin >> mat[i][j];

    cout << "Matrix is:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
    return 0;
}
