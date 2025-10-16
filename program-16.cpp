#include <iostream>
using namespace std;

class Device {
public:
    void power() {
        cout << "Device powered on" << endl;
    }
};

class Laptop : public Device {
public:
    void open() {
        cout << "Laptop lid opened" << endl;
    }
};

class Machine {
public:
    void start() {
        cout << "Machine starting..." << endl;
    }
};

class Computer : public Machine {
public:
    void compute() {
        cout << "Computer processing data" << endl;
    }
};

class Developer : public Computer {
public:
    void debug() {
        cout << "Developer debugging code" << endl;
    }
};

class Painter {
public:
    void paint() {
        cout << "Painter painting art" << endl;
    }
};

class Musician {
public:
    void play() {
        cout << "Musician playing music" << endl;
    }
};

class Artist : public Painter, public Musician {
public:
    void create() {
        cout << "Artist creating masterpiece" << endl;
    }
};

class Shape {
public:
    void draw() {
        cout << "Drawing shape" << endl;
    }
};

class Circle : public Shape {
public:
    void area() {
        cout << "Area of circle calculated" << endl;
    }
};

class Square : public Shape {
public:
    void area() {
        cout << "Area of square calculated" << endl;
    }
};

int main() {
    cout << "Single Inheritance:" << endl;
    Laptop l;
    l.power();
    l.open();

    cout << "\nMultilevel Inheritance:" << endl;
    Developer d;
    d.start();
    d.compute();
    d.debug();

    cout << "\nMultiple Inheritance:" << endl;
    Artist a;
    a.paint();
    a.play();
    a.create();

    cout << "\nHierarchical Inheritance:" << endl;
    Circle c;
    c.draw();
    c.area();

    Square s;
    s.draw();
    s.area();
    return 0;

}

// # OUTPUT:
// Single Inheritance:
// Device powered on
// Laptop lid opened

// Multilevel Inheritance:
// Machine starting...
// Computer processing data
// Developer debugging code

// Multiple Inheritance:
// Painter painting art
// Musician playing music
// Artist creating masterpiece

// Hierarchical Inheritance:
// Drawing shape
// Area of circle calculated
// Drawing shape
// Area of square calculated
