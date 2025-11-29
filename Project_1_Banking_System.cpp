// Write a C++ program to implement a class called BankAccount that has private member variables for cvv , pin and balance.
// Public variables are Account Number(10 Digits) , IFSC code(6 characters) and Name of Account holder.
// Include member functions to deposit and withdraw money from the account.

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
   private:
    int pin;
    int cvv;
    int balance;

   public:
    string name;
    string ifscCode;
    long long accountNumber;

    void setBalance() { balance = 100000; }

    BankAccount(int pin, int cvv, int bal, string n, string ifc, long long acc) {
        this->pin = pin;
        this->cvv = cvv;
        this->balance = bal;
        this->name = n;
        this->ifscCode = ifc;
        this->accountNumber = acc;
    }

    bool verifyPin(int enteredPin) { return (enteredPin == pin); }

    int checkBalance() {
        cout << "Current Balance : " << balance << endl;
        return balance;
    }

    void deposit(int depAmount) {
        if (depAmount <= 0) {
            cout << "Invalid Amount" << endl;
            return;
        }
        balance += depAmount;
        cout << "Balance Deposited : " << depAmount << endl;
        cout << "Current Balance : " << balance << endl;
    }

    void withdraw(int withAmount) {
        if (withAmount <= 0) {
            cout << "Invalid Amount" << endl;
            return;
        }
        balance -= withAmount;
        cout << "Balance Withdraw : " << withAmount << endl;
        cout << "Current Balance : " << balance << endl;
    }
};

int main() {
    BankAccount user1(4666, 8567, 10000, "Ansh", "MUJ218", 2428010128);

    int enteredPin;
    cout << "Enter Pin : ";
    cin >> enteredPin;

    if (user1.verifyPin(enteredPin) == 0) {
        cout << "Incorrect Pin ! , Access Denied" << endl;
        return 0;
    }

    int choice;
    do {
        cout << "\nLogin Successful!\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "0. Exit....\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                user1.checkBalance();
                break;
            case 2:
                int depAmount;
                cout << "Enter Deposit Amount : ";
                cin >> depAmount;
                user1.deposit(depAmount);
                break;
            case 3:
                int withAmount;
                cout << "Enter WithDraw Amount : ";
                cin >> withAmount;
                if (withAmount > user1.checkBalance()) {
                    cout << "Insufficient Balance" << endl;
                    break;
                }
                user1.withdraw(withAmount);
                break;
            case 0:
                cout << "Exiting...." << endl;
                break;
            default:
                cout << "Invaid Value";
        }
    } while (choice != 0);

    return 0;
}