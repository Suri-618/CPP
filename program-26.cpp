#include <iostream>
using namespace std;
int divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw "Division by zero error";  
    }
    return numerator / denominator;
}
int main() {
    int a = 10;
    int b = 0;
    
    try {
        cout << "Trying division..." << endl;
        int result = divide(a, b);
        cout << "Result: " << result << endl;
    }
    catch (const char* e) {
        cout << "Exception caught: " << e << endl;
    }
    cout << "Program continues after exception handling." << endl;
    return 0;
}