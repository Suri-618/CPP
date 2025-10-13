#include <iostream>
using namespace std;

class Person {
public:
    string name;
    Person(string n) : name(n) {
        cout << "Person constructor called\n";
    }
};

class Employee : virtual public Person {
public:
    int empID;
    Employee(string n, int id) : Person(n), empID(id) {
        cout << "Employee constructor called\n";
    }
};

class Student : virtual public Person {
public:
    int rollNo;
    Student(string n, int r) : Person(n), rollNo(r) {
        cout << "Student constructor called\n";
    }
};

class WorkingStudent : public Employee, public Student {
public:
    WorkingStudent(string n, int id, int r)
        : Person(n), Employee(n, id), Student(n, r) {
        cout << "WorkingStudent constructor called\n";
    }

    void display() {
        cout << "Name: " << name << endl;    // No ambiguity due to virtual inheritance
        cout << "Employee ID: " << empID << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
    WorkingStudent ws("Nanda", 2005, 126);
    ws.display();

    return 0;
}