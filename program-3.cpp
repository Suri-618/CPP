#include <iostream>
using namespace std;

int x = 50;  
namespace mySpace {
    int x = 100; // Namespace variable
}

int main () {
    int x = 10; // Local variable

    cout << "Local x = " << x << endl;
    cout << "Global x = " << ::x << endl;
    cout << "Namespace x = " << mySpace::x << endl;
    return 0;

}

// # OUTPUT:
// Local x = 10
// Global x = 50
// Namespace x = 100
