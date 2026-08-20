#include <iostream>
using namespace std;

class bankAccount {
private:
    double balance = 0;

public:

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
        }
    }

    void displayBalance() {
        cout << "The balance is: " << balance << endl;
    }
};

int main() {
    bankAccount obj;

    obj.deposit(5000);
    obj.withdraw(1000);
    obj.displayBalance();

    return 0;
}