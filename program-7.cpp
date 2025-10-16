#include <iostream>
using namespace std;

class Car {

private:
    string model;
    int year;

public:
    Car(string model, int year) {
        this->model = model;
        this->year = year;
    }
    Car& setModel(string model) {
        this->model = model;
        return *this;
    }
    Car& setYear(int year) {
        this->year = year;
        return *this;
    }

    void showDetails() {
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() 
{
    Car car1("Unknown", 0);
    car1.setModel("Tesla Model 3").setYear(2023);
    car1.showDetails(); 
    return 0;

}

// # OUTPUT:
// Model: Tesla Model 3
// Year: 2023
