#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() {
        cout << "Starting generic vehicle\n";
    }
    virtual ~Vehicle() {
        cout << "Vehicle destroyed\n";
    }
};

class Car : public Vehicle {
public:
    void start() override {
        cout << "Car engine started\n";
    }
    ~Car() {
        cout << "Car destroyed\n";
    }
};

class Bike : public Vehicle {
public:
    void start() override {
        cout << "Bike engine started\n";
    }
    ~Bike() {
        cout << "Bike destroyed\n";
    }
};

int main() {
    Vehicle* v1 = new Car();
    Vehicle* v2 = new Bike();

    v1->start();
    v2->start();

    delete v1;
    delete v2;

    return 0;
}