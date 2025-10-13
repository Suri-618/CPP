#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter(int c = 0) : count(c) {}

    void show() const {
        cout << "Count: " << count << endl;
    }
    Counter operator++() {
        count++;
        return *this;
    }
    Counter operator-(const Counter& c2) const {
        return Counter(count - c2.count);
    }
};

int main() {
    Counter c1(10), c2(4);
    ++c1;
    Counter c3 = c1 - c2;
    cout << "c1 after increment: ";
    c1.show();
    cout << "c3 (c1 - c2): ";
    c3.show();
    return 0;
}