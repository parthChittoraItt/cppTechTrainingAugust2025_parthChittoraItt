    #include <iostream>
using namespace std;

static void printMessage() {
    cout << "Printing message from static function" << endl;
}

int main() {
    printMessage();  // works fine
    return 0;
}
