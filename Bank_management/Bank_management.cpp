#include<iostream>
using namespace std;
class bankaccount
{
    private:
    string bankholdername;
    double balance;
    double percentage;

    public:
    bankaccount(string name,double initial_amount,double interest){
    bankholdername=name;
    balance=initial_amount;
    percentage=interest;
}
double calculate_interest()
{
    double interest=(percentage/100)*balance;
    cout<<"your interest on one month: "<<interest<<endl;
    return interest;
} 
double calculate_interest_on_deposit(double deposit_amount)
{
    double interest=(percentage/100)*deposit_amount;
    cout<<"your interest on one month: "<<interest<<endl;
    return interest;

}
void deposit()
{
    double amount;
    cout<<"enter amount to deposit: ";
    cin>>amount;
     balance=(balance+amount);
    double interest_on_deposit=calculate_interest_on_deposit(balance);
    balance=balance+interest_on_deposit;
cout<<"your current balance: "<<balance<<endl;
}
double calculate_interest_on_withdrawal(double withdraw_amount)
{
    double interest=(percentage/100)*withdraw_amount;
    cout<<"your interest on one month: "<<interest<<endl;
    return interest;

}
void withdraw()
{
    double amount;
    cout<<"enter amount to withdraw: ";
    cin>>amount;
    balance=(balance+amount);
double interest_on_withdraw=calculate_interest_on_withdrawal(balance);
  balance=balance+interest_on_withdraw;  

cout<<"your current balance: "<<balance<<endl;
}

double getbalance()
{
return balance;
}

};
int main()
{
string name;
double initial_amount,percentage;
cout<<"enter name: ";
cin>>name;
cout<<"enter initial amount: ";
cin>>initial_amount;
int choice;
cout<<"enter percentage: ";
cin>>percentage;
 bankaccount account(name,initial_amount,percentage);
 while(true){
 cout<<"Enter 1 for deposit"<<endl<<"Enter 2 for withdraw"<<endl<<"enter 3 - calculate interest for 1 month"<<endl<<"Enter 0 to exit"<<endl;
 cout<<"enter choice: ";
 cin>>choice;
switch(choice)
 {
   case 1:
    {
    account.deposit();
    break;
    }
  case 2:
  {
     account.withdraw();
     break;
    }
   case 3:
    {
        account.calculate_interest();
        break;
    }
  
case 0:{
    cout<<"exiting program"<<endl;
    return 0;
    }
    default:{
        cout<<"please enter valid choice";
        break;
    }

 }

 }
    


   
  return 0; 


}
