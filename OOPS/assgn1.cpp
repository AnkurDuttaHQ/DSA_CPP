// Mini Bank Account Management System

#include <iostream>
#include <string>
using namespace std;

class Bank {
private:
    int accountNumber;
    double balance;

    friend class ManageAccount;

public:
    // Constructor
    Bank(int accno, double bal) {
        accountNumber = accno;
        balance = bal;
    }
};

class ManageAccount {
public:
    // Get Account Number
    void getAccno(Bank &obj) {
        cout << "Account Number : " << obj.accountNumber << endl;
    }

    // Get Balance
    void getBal(Bank &obj) {
        cout << "Current Balance : " << obj.balance << endl;
    }

    // Change Account Number
    void changeAccno(int newAccno, Bank &obj) {
        cout << "Old Account Number : " << obj.accountNumber << endl;
        obj.accountNumber = newAccno;
        cout << "New Account Number : " << obj.accountNumber << endl;
    }

    // Deposit Money
    void Credit(double amount, Bank &obj) {
        cout << "Old Balance : " << obj.balance << endl;
        obj.balance += amount;
        cout << "Amount Deposited Successfully!" << endl;
        cout << "Current Balance : " << obj.balance << endl;
    }

    // Withdraw Money
    void Debit(double amount, Bank &obj) {
        if (amount > obj.balance) {
            cout << "Insufficient Balance!" << endl;
            return;
        }

        cout << "Old Balance : " << obj.balance << endl;
        obj.balance -= amount;
        cout << "Amount Withdrawn Successfully!" << endl;
        cout << "Current Balance : " << obj.balance << endl;
    }
};

int main() {

    int accountNumber;
    double balance;

    cout << "===== Create Your Savings Account =====" << endl;

    cout << "Enter Account Number: ";
    cin >> accountNumber;

    cout << "Enter Initial Deposit: ";
    cin >> balance;

    Bank cust1(accountNumber, balance);
    ManageAccount m1;

    cout << "\nAccount Created Successfully!\n" << endl;

    m1.getAccno(cust1);
    m1.getBal(cust1);

    while (true) {

        int choice;

        cout << "\n========== MENU ==========" << endl;
        cout << "1. Change Account Number" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Show Account Details" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1: {
            int newAccNo;
            cout << "Enter New Account Number: ";
            cin >> newAccNo;
            m1.changeAccno(newAccNo, cust1);
            break;
        }

        case 2: {
            double amount;
            cout << "Enter Amount to Deposit: ";
            cin >> amount;
            m1.Credit(amount, cust1);
            break;
        }

        case 3: {
            double amount;
            cout << "Enter Amount to Withdraw: ";
            cin >> amount;
            m1.Debit(amount, cust1);
            break;
        }

        case 4: {
            m1.getAccno(cust1);
            m1.getBal(cust1);
            break;
        }

        case 5: {
            cout << "\nThank You for Using the Bank Management System!" << endl;
            return 0;
        }

        default:
            cout << "Invalid Choice! Please Try Again." << endl;
        }
    }

    return 0;
}