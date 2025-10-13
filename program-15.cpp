#include <iostream>
using namespace std;

class Celsius {
    float degree;

public:
    Celsius(float d = 0) : degree(d) {}

    void print() const {
        cout << degree << " C" << endl;
    }

    friend Celsius operator-(const Celsius& c);
    friend Celsius operator+(const Celsius& c1, const Celsius& c2);
};
Celsius operator-(const Celsius& c) {
    return Celsius(0 - c.degree);
}
Celsius operator+(const Celsius& c1, const Celsius& c2) {
    return Celsius(c1.degree + c2.degree);
}

int main() {
    Celsius a(18.2), b(5.8);
    Celsius total = a + b;
    Celsius inverse = -a;

    cout << "Value A: "; a.print();
    cout << "Value B: "; b.print();
    cout << "Total (A + B): "; total.print();
    cout << "Inverse of A: "; inverse.print();

    return 0;
}