#include <iostream>
using namespace std;
template <typename T>
class Box {
    T value;
public:
    Box(T val) {
        value = val;
    }
    void show() {
        cout << "Box contains: " << value << endl;
    }
    T getValue() {
        return value;
    }
};
int main() {
    Box<int> intBox(100);
    Box<float> floatBox(45.67);
    Box<string> stringBox("Hello, Lakshmi!");
    intBox.show();
    floatBox.show();
    stringBox.show();
    return 0;
}