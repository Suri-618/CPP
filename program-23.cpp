Program :
#include <iostream>
using namespace std;

class Appliance {
public:
    virtual void turnOn() {
        cout << "Turning on generic appliance." << endl;
    }
};

class Fan : public Appliance {
public:
    void turnOn() override {
        cout << "Fan is spinning." << endl;
    }
};

class Light : public Appliance {
public:
    void turnOn() override {
        cout << "Light is glowing." << endl;
    }
};

void operate(Appliance* app) {
    app->turnOn();
}

int main() {
    Fan f;
    Light l;

    operate(&f);
    operate(&l);

    return 0;
}