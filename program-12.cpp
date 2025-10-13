#include <iostream>
using namespace std;

class Box {
private:
    int length, width, height;
public:
    Box() {
        length = width = height = 1;
    }
    Box(int l) {
        length = width = height = l;
    }
    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }
    void volume() {
        cout << "Volume: " << length * width * height << endl;
    }
};
int main() {
    Box b1;
    Box b2(3);
    Box b3(2, 4, 5);
    b1.volume();
    b2.volume();
    b3.volume();

    return 0;
}