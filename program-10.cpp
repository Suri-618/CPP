#include <iostream>
using namespace std;

class Book {

private:
    string title;
    double price;

public:
    Book(string t, double p) : title(t), price(p) {}
    friend void displayBookDetails(const Book& b);
};

void displayBookDetails(const Book& b) {
    cout << "Book Title: " << b.title << endl;
    cout << "Price: $" << b.price << endl;
}

int main() {
    Book myBook("C++ Programming", 99.99);
    displayBookDetails(myBook);

    return 0;
}