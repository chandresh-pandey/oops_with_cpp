#include <iostream>
using namespace std;

class BankAccount{
private:
    int accountNumber;
    string customerName;
    float balance;

public:
    BankAccount(int a, string n, float b) {
        accountNumber = a;
        customerName = n;
        balance = b;
    }

    friend void compareBalance(BankAccount a, BankAccount b);
};

void compareBalance(BankAccount a, BankAccount b) {

    if (a.balance > b.balance) {
        cout << "Higher Balance Account:" << endl;
        cout << "Account Number: " << a.accountNumber << endl;
        cout << "Customer Name: " << a.customerName << endl;
        cout << "Balance: " << a.balance << endl;
    }
    else {
        cout << "Higher Balance Account:" << endl;
        cout << "Account Number: " << b.accountNumber << endl;
        cout << "Customer Name: " << b.customerName << endl;
        cout << "Balance: " << b.balance << endl;
    }


}



int main() {

    BankAccount a1(101, "Rahul", 25000);
    BankAccount a2(102, "Aman", 40000);

    compareBalance(a1, a2);

    return 0;
}