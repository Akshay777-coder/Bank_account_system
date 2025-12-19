/*===========================================*/
/* Total count (rough idea) */

// Item	     Count
// Classes  	4
// Functions	~18–22
// Operators	2–3 (optional)
/*===========================================*/
/* Operator overloading (keep it minimal) */

// Just 2 operators are enough:
// 1. +=   → deposit
// 2. <<   → display account
/*===========================================*/

#include<iostream>
using namespace std;

class account {
    int accountNumber;
    string name;
    int balance;
public:
    void deposits() {};
    virtual void withdraw() {};
    virtual void showDetails() {};
    void getAccountNumber() {};
    void getBalance() {};
    void setBalance() {};
    virtual void destructor() {};
};
class savingsAccount {
    int interestRate;
public:
    void addInterest() {};
    virtual withdraw() override {}; // override if nedded
    virtual showDetails() override {}; // override
};

class currentAccount {
    int overdraftLimit;
public:
    void withdraw() {}; // (override – allow overdraft)
    void showDetails() {};
};

class bank {
    int account<vector*>;
public:
    void createAccount() {};
    void findAccount() {};
    void depositMoney() {};
    void withdrawMoney() {};
    void singleAccount() {};
    void allAccounts() {};
    void deleteAccount() {};
    void menu() {}; // main controller
};

int main() {
    return 0;
}