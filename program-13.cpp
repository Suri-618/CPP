#include <iostream>
using namespace std;

class Book {
private:
    string title;
    int pages;
public:
    Book(string t, int p) {
        title = t;
        pages = p;
    }
    Book(const Book &b) {
        title = b.title;
        pages = b.pages;
        cout << "Copy constructor called!" << endl;
    }
    void show() {
        cout << "Title: " << title << ", Pages: " << pages << endl;
    }
};
int main() {
    Book original("C++ Basics", 120);
    Book copy = original;
    original.show();
    copy.show();
    return 0;
}