#include <iostream>
using namespace std;
class BankAccount {
private:
    int accountNumber;
    string name;
    double balance;
public:
    void setAccount(int accNo, string accName, double bal) {
        accountNumber = accNo;
        name = accName;
        balance = bal;
    }
    void deposit(double amount) {
        balance += amount;
    }
    bool withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            return balance;
        }
        return -1;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Account No: " << accountNumber << endl;
        cout << "Balance: ₹" << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.setAccount(126, "Nanda", 10000.0);
    acc.deposit(5000);
    if (acc.withdraw(2000))
        cout << "Withdrawal successful.\n";
    else
        cout << "Withdrawal failed.\n";
    acc.display();
    return 0;
}