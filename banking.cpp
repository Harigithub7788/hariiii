#include <iostream>

using namespace std;


void showBalance(int balance);
double deposit();
double widthrawal(double balance);


int main(){
    
   
      
    int balance = 0.00;
    int choice = 0;

do{   
    cout<<"***********************************************";
    cout<<"Enter a choice";
    cout<<"***********************************************\n";
    cout<<"1.Show Balance\n";
    cout<<"2.Deposit\n";
    cout<<"3.Withrawal\n";
    cout<<"4.Exit\n";
    cin>>choice;
    std::cin.clear();
    fflush(stdin);
    



    switch(choice){
        case 1:
            showBalance(balance);
            break;
        case 2 :
            balance += deposit();
            showBalance(balance);

            break;
        case 3:
            balance -= widthrawal(balance);
            showBalance(balance);
            break;
        case 4:
            cout<<"ThankYOu for visiting....\n";
            cout<<"**************************";
            break;
        default:
            cout<<"Invalid Entry\n";    
}

    }while (choice != 4);
return 0;
}

void showBalance(int balance){
    cout<<"The current balance in the account is "<<balance<<"\n";
    
}

double deposit(){
        double amount=0;
        cout<<"Enter the amount to be deposited  ";
        cin>>amount;

        if (amount>=0){
            return amount  ;
        }
        else {
            cout<<"Enter a valid amount\n";
            return 0;
        }


    

}

double widthrawal( double balance){
    
    double amount=0;
    cout<<"Enter the amount to be withdraw  ";
    cin>>amount;

    if (amount > balance){
        cout<<"Insufficient balance\n";
        return 0;

    }
    else if (amount<0)
    {
        cout<<"Its not a valid amount\n ";
        return 0;
    }
    
    return amount;

}
