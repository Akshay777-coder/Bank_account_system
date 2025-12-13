#include<iostream>
using namespace std;

/*class BankAccount{
    int accountNumber;
    int balance;
    int transactions[5];
    int amount;
    public:
        void openAccount(); // input accountNumber and initial Balance
        void deposits(int amount); // add amount to balance and store in array
        void withdraw(int amount); // subtract amount if balance is sufficient
        void showBalance(); // display current balance
        void showTransactions(); // display all transactions
};
*/

/*void BankAccount :: openAccount(){
}
void BankAccount :: deposits(int amount){
}
void BankAccount :: withdraw(int amount){
} 
void BankAccount :: showBalance(){
}
void showTransactions(){
}
*/

void menu(void){
    int choice;
    cout<<"1 --> OpenAccount\n2 --> Deposits\n3 --> Withdraw\n4 --> showBalance\n5 --> showTransactions\n"<<endl;
    cout<<"Enter Your Choice: ";
    cin>>choice;
    /*switch(choice){
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
    }*/
}

int main(){
    cout<<"\t\t***Welcome_To_Our_Money_bank***\n"<<endl;
    menu();
    //BankAccount acc;
    return 0;
}
