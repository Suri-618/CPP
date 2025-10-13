#include <iostream>
using namespace std;

class Engine {
public:
    Engine() {
        cout << "Engine constructed\n";
    }
    ~Engine() {
        cout << "Engine destroyed\n";
    }
};

class Car : public Engine {
public:
    Car() {
        cout << "Car constructed\n";
    }
    ~Car() {
        cout << "Car destroyed\n";
    }
};

class ElectricCar : public Car {
public:
    ElectricCar() {
        cout << "ElectricCar constructed\n";
    }
    ~ElectricCar() {
        cout << "ElectricCar destroyed\n";
    }
};

int main() {
    cout << "Starting simulation...\n";
    ElectricCar tesla;
    cout << "Simulation ending...\n";
    return 0;
}