#include <iostream>
using namespace std;
void showmenu(){
    cout<< "*************MENU*************"<<endl;
    cout<< "1. check balance"<<endl;
    cout<< "2. deposit"<<endl;
    cout<< "3. withdraw"<<endl;
    cout<< "4. EXIT"<<endl;
    cout<< "*************////*************"<<endl;

}
int main() {
     int option;
     double balance;
     balance=300; // user has a starting balance of 300usd


    do {
        showmenu();
        cout << "please select an option: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "balance is " << "$" << balance<< endl;
                break;
            case 2:
                cout << "deposit amount:";
                double depositAmount;
                cin >> depositAmount;
                balance = balance + depositAmount;
                break;
            case 3:
                cout << "withdraw amount:";
                double withdrawAmount;
                cin >> withdrawAmount;
                if (withdrawAmount <= balance)
                    balance = balance - withdrawAmount;
                else
                    cout << "insufficient funds"<<endl;
                break;
            case 4:cout<< "thanks for banking with us"<< endl;
            default:
                if (option >4)
                    cout<<"incorrect option please try again "<< endl;
        }
       } while (option!=4);
    }

