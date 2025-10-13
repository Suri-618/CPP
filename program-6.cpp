#include <iostream>
using namespace std;

class Person {
private:
    string name;

public:
    int age;

    void setName(string n) {
        name = n;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person p;
    p.age = 20;
    p.setName("Nanda");
    p.displayInfo();

    return 0;
}