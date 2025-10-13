#include <iostream>
using namespace std;
template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}
int main() {
    int x = 5, y = 10;
    cout << "Max of " << x << " and " << y << " is " << getMax(x, y) << endl;
    double a = 5.5, b = 2.3;
    cout << "Max of " << a << " and " << b << " is " << getMax(a, b) << endl;
    char c1 = 'A', c2 = 'Z';
    cout << "Max of " << c1 << " and " << c2 << " is " << getMax(c1, c2) << endl;
    return 0;
}