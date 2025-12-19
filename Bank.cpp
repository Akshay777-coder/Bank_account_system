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
void menu(void){
    while(1){
        int choice;
        cout<<"1 --> OpenAccount\n2 --> Deposits\n3 --> Withdraw\n4 --> showBalance\n5 --> showTransactions\n6 --> Exit"<<endl;
        cout<<"Enter Your Choice: ";
        cin>>choice;
        switch(choice){
            case 1:
            acc.openAccount();
            break;
            case 2:
            acc.deposits();
            break;
            case 3:
            acc.withdraw();
            break;
            case 4:
            acc.showBalance();
            break;
            case 5:
            acc.showTransactions();
            break;
            case 6;
            goto end;
            break;
        }
        menu();
    }
    end:
}

int main(){
    BankAccount account[20];
    cout<<"\t\t***Welcome_To_Our_Money_bank***\n"<<endl;
    menu();
    //BankAccount acc;
    return 0;
}        acc.openAccount();
        break;
        case 2:
        acc.deposits();
        break;
        case 3:
        acc.withdraw();
        break;
        case 4:
        acc.showBalance();
        break;
        case 5:
        acc.showTransactions();
        break;
    }*/
}

int main(){
    cout<<"\t\t***Welcome_To_Our_Money_bank***\n"<<endl;
    menu();
    //BankAccount acc;
    return 0;
}
