#pragma once

#include <iostream>
#include <string>

using namespace std;

class BankAccount {
    private:
    string personnummer;
    double balance;

    public:
    void deposit(double amount) {
        if (amount > 0.00)
        {
        balance += amount;
        cout << personnummer << ": " << "Deposited $" << amount << ". New balance: $" << balance << "\n";
        }
        else
        {
            cout << "Ogiltigt värde." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0.00)
        {
        balance -= amount;
        cout << personnummer << ": " << "Withdrew $" << amount << ". New balance: $" << balance << "\n";
        }
        else
        {
            cout << "Ogiltigt värde." << endl;
        }
    }

    BankAccount(string personnummer, double balance) : personnummer(personnummer), balance(balance)
    { };
};

