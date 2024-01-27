#include<iostream>
using namespace std;

class bank_account {
private:
    char name[30];
    int num;
    char type[30];
    int balance;
public:
    // Constructor to initialize the object's attributes
    bank_account() {
        balance = 0; // Initialize balance to 0 by default
    }

    void initial_value() {
        cout << "The name of the person: " << endl;
        cin.getline(name, 30);
        cout << "Account Type is: " << endl;
        cin.getline(type, 30);
        cout << "Account num is: " << endl;
        cin >> num;
        cout << "Account Balance is : " << endl;
        cin >> balance;
    }

    void deposite(int amount) {
        balance += amount;
        cout << "Amount after deposit: " << balance << endl;
    }

    void withdraw(int amount) {
        if (amount > balance) {
            cout << "Amount is not enough" << endl;
        }
        else {
            balance -= amount;
            cout << "Amount after withdrawal: " << balance << endl;
        }
        system("pause");
    }

    void display() {
        cout << "The name of depositor : " << name << endl;
        cout << "Account number is: " << num << endl;
        cout << "Account type is: " << type << endl;
        cout << "Account Balance is : " << balance << endl;
    }
};

int main() {
    bank_account H;
    int amount;
    int choose;

    H.initial_value();
    cout << "-------------Atm----------" << endl;
    cout << "Press 1 to deposit" << endl;
    cout << "Press 2 to withdraw" << endl;
    cin >> choose;

    switch (choose) {
    case 1:
        cout << "Account Deposit: " << endl;
        cin >> amount;
        H.deposite(amount);
        break;
    case 2:
        cout << "Account Withdraw: " << endl;
        cin >> amount;
        H.withdraw(amount);
        break;
    }

    H.display();
    return 0;
}

