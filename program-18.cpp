#include <iostream>
using namespace std;

class Box {
    int length, width, height;
public:
    void setDimensions(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }
    int volume() const {
        return length * width * height;
    }
    void display() const {
        cout << "Length: " << length
             << ", Width: " << width
             << ", Height: " << height
             << ", Volume: " << volume() << endl;
    }
};

int main() {
    Box b1;
    Box* ptr = &b1;  // pointer to object b1
    ptr->setDimensions(10, 5, 3);  // access members using pointer
    ptr->display();
    // Manipulating object using pointer
    ptr->setDimensions(7, 4, 2);
    ptr->display();
    return 0;
}