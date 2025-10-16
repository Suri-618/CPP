#include <iostream>
using namespace std;

class Counter {
private:
    static int count;

public:
    Counter() {
        count++;
        cout << "Object created. Total objects: " << count << endl;
    }
    ~Counter() {
        count--;
        cout << "Object destroyed. Remaining objects: " << count << endl;
    }
};
int Counter::count = 0;
int main() {
    cout << "Program starts..." << endl;

    Counter c1;
    {
        Counter c2;
        Counter c3;
    }
    Counter c4;
    cout << "Program ends..." << endl;
    return 0;

}

// # OUTPUT:
// Program starts...
// Object created. Total objects: 1
// Object created. Total objects: 2
// Object created. Total objects: 3
// Object destroyed. Remaining objects: 2
// Object destroyed. Remaining objects: 1
// Object created. Total objects: 2
// Program ends...
// Object destroyed. Remaining objects: 1
// Object destroyed. Remaining objects: 0
