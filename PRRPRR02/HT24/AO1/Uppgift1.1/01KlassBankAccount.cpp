#include <iostream>

using namespace std;

class bankAccount{
    public:
    float balance;

    bankAccount(float balance, string socialSecurity) : balance(balance), socialSecurity(socialSecurity)
    {};

    float deposit(float amount)
    {
        balance += amount;
        return balance;
    }
    float withdraw(float amount)
    {
        balance -= amount;
        return balance;
    }
    private:
    string socialSecurity;
};

int main()
{
    bankAccount acc1(3100.0f, "19880602-2141");
    bankAccount acc2(100.0f, "20020721-3492");

    acc1.withdraw(1000.0f);
    acc2.deposit(2000.0f);

    cout << "Saldo för konto 1 " << acc1.balance << " kr." << endl;
    cout << "Saldo för konto 2 " << acc2.balance << " kr." << endl;
}