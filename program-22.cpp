#include <iostream>
using namespace std;

class Employee {
public:
    virtual void displayRole() {
        cout << "General Employee" << endl;
    }
};

class Manager : public Employee {
public:
    void displayRole() override {
        cout << "Manager: Handles team operations." << endl;
    }
};

class Developer : public Employee {
public:
    void displayRole() override {
        cout << "Developer: Writes code and fixes bugs." << endl;
    }
};

int main() {
    Employee* emp;
    Manager m;
    Developer d;

    emp = &m;
    emp->displayRole();

    emp = &d;
    emp->displayRole();

    return 0;
}