#include<iostream>
using namespace std;
class Account
{
protected:
    string AccHolderName;
    int AccNo;
    double balance;
    float intrestRate;
public:
    Account()
    {
        cout<<"empty"<<endl;
    }
    Account(string Acountholdername,int accno,double blance, float intereste)
    {
        AccHolderName=Acountholdername;
        AccNo=accno;
        balance=blance;
        intrestRate=intereste;
    }
    ~Account(){}
    showDetails()
    {
        cout<<"AccHolderName is "<<AccHolderName<<endl;
        cout<<"AccNo is "<<AccNo <<endl;
        cout<<"balance is "<<balance<<endl;
        cout<<"intrestRate is "<<intrestRate<<endl;
    }
};

class Savings : private Account
{
public:
    Savings(string name,int no,double blnc, float inter): public Account(Acountholdername,accno,blance,intereste)
    {
        AccHolderName=name;
        AccNo=no;
        balance=blnc;
        intrestRate=inter;
~Savings(){}

showDetails()
    {
        cout<<"AccHolderName is "<<AccHolderName<<endl;
        cout<<"AccNo is "<<AccNo <<endl;
        cout<<"balance is "<<balance<<endl;
        cout<<"intrestRate is "<<intrestRate<<endl;
    }
    int dep,with;
    deposit(int amount)
    {
        balance=balance+amount;
        cout<<"new balance is :"<<balance<<endl;
    }

    withdraw(int amount)
    {
         if (balance>amount)
            {
        balance=balance-amount;
        cout<<"new balance is "<<balance<<endl;
            }
        else
        {
            cout<<"low balance"<<endl;
        }
    }
};

class FixedDeposit : private Account
{
public:
    int tenureYer,installmentAmount;
    FixedDeposit(string name,int no,double blnc, float inter): public Account(Acountholdername,accno,blance,intereste)
    {
        AccHolderName=name;
        AccNo=no;
        balance=blnc;
        intrestRate=inter;
    }
    ~FixedDeposit(){}
    showDetails()
    {
        cout<<"AccHolderName is "<<AccHolderName<<endl;
        cout<<"AccNo is "<<AccNo <<endl;
        cout<<"balance is "<<balance<<endl;
        cout<<"intrestRate is "<<intrestRate<<endl;
    }

};

int main()
{
 string AccHolderName;
    int AccNo;
    double balance;
    float intrestRate;
    cout<<"please enter your savings account details"<<endl;

    cout<<"AccHolderName"<<endl;
    cin>>AccHolderName ;cout<<endl;

     cout<<"AccNo"<<endl;
    cin>> AccNo;cout<<endl;

     cout<<"balance"<<endl;
    cin>>balance ;cout<<endl;

     cout<<"intrestRate"<<endl;
    cin>>intrestRate ;cout<<endl;
    Savings a1(string AccHolderName,int AccNo,double balance,float intrestRate);
    a1.showDetails();

    cout<<"please enter your Fixed deposit account details"<<endl;

    cout<<"AccHolderName"<<endl;
    cin>>AccHolderName ;cout<<endl;

     cout<<"AccNo"<<endl;
    cin>> AccNo;cout<<endl;

     cout<<"balance"<<endl;
    cin>>balance ;cout<<endl;

     cout<<"intrestRate"<<endl;
    cin>>intrestRate ;cout<<endl;
    FixedDeposit a2(string AccHolderName,int AccNo,double balance,float intrestRate);
    a2.showDetails();
return 0;
}
