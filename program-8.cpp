#include <iostream>
using namespace std;

class Printer {

public:
    void display(int i) {
        cout << "Integer: " << i << endl;
    }

    void display(double d) {
        cout << "Double: " << d << endl;
    }

    void display(string s) {
        cout << "String: " << s << endl;
    }

    void display (int i, string s) {

        cout << "Integer: " << i << ", String: " << s << endl;
    }
};

int main () 
{
    Printer p;
    p.display(10);
    p.display(3.14);
    p.display("Hello");
    p.display(42, "Answer");
    return 0;

}