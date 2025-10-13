#include <iostream>
#include <string>
using namespace std;

class CustomException {
public:
    string message;
    CustomException(string msg) : message(msg) {}
};
int main() {
    try {
        int choice;
        cout << "Enter a number (1-3) to trigger different exceptions: ";
        cin >> choice;

        if (choice == 1) {
            throw 42;
        } else if (choice == 2) {
            throw 3.14;
        } else if (choice == 3) {
            throw CustomException("Custom exception triggered!");
        } else {
            throw "Unknown exception";
        }
    }
    catch (int e) {
        cout << "Caught an integer exception: " << e << endl;
    }
    catch (double e) {
        cout << "Caught a double exception: " << e << endl;
    }
    catch (CustomException e) {
        cout << "Caught a custom exception: " << e.message << endl;
    }
    catch (...) {
        cout << "Caught an unknown exception!" << endl;
    }

    return 0;
}