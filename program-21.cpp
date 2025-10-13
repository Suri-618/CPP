#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Some animal sound\n";
    }
};
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks\n";
    }
};
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows\n";
    }
};
void makeSound(Animal& a) {
    a.sound();
}

int main() {
    Dog d;
    Cat c;

    makeSound(d);
    makeSound(c);

    return 0;
}