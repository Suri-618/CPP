#include <iostream>
using namespace std;

void callByValue(int a) {
    a = a + 10;
    cout << "Inside callByValue: " << a << endl;
}

void callByReference(int &b) {
    b = b + 10;
    cout << "Inside callByReference: " << b << endl;
}

int main () {

    int x = 6, y = 6;

    callByValue(x);

    cout << "After callByValue: " << x << endl;

    callByReference(y);

    cout << "After callByReference: " << y << endl;

    return 0;
}
