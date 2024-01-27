#include <iostream>
using namespace std;
class BankAccount {
public:
    virtual void calculateInterest() = 0;  // Pure virtual function
};

class SavingsAccount : public BankAccount {
public:
    void calculateInterest() override {
        cout << "Interest calculated for Savings Account." <<endl;
    }
};

class CurrentAccount : public BankAccount {
public:
    void calculateInterest() override {
       cout << "Interest calculated for Current Account." <<endl;
    }
};

int main() {
    BankAccount* account1 = new SavingsAccount();
    BankAccount* account2 = new CurrentAccount();
    account1->calculateInterest();  // Calls SavingsAccount's implementation
    account2->calculateInterest();  // Calls CurrentAccount's implementation
   
    return 0;
}

