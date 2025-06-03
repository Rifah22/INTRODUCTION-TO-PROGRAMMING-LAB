#include<iostream>
using namespace std;
class Bank
{
private:
    string Account_name;
    string Account_no;
    string Account_type;
    int Balance;
public:
    void setname(string n)
    {
        Account_name=n;
    }
    string getname()
    {
        return Account_name;
    }

    void setno(string no)
    {
        Account_no=no;
    }
    string getno()
    {
        return Account_no;
    }

    void settyp(string typ)
    {
        Account_type=typ;
    }
    string gettyp()
    {
        return Account_type;
    }

    void setbalance(int b)
    {
        Balance=b;
    }
    int getbalance()
    {
        return Balance;
    }
    Bank(){}//Empty constructor
Bank(string Anm,string Ano,string Atyp, int Blce)//parameterized constructor
{
    Account_name=Anm;
    Account_no=Ano;
    Account_type=Atyp;
    Balance=Blce;
}
~Bank(){}
int deposit(int amount)
{
    Balance+=amount;
    return Balance;
}
int withdraw(int amount)
{
    if(amount<=Balance)
    {
        Balance=Balance-amount;
    }
    else
    {
        cout<<"Insufficient Balance";
    }
    return Balance;
}
void transfer(int amount)
{
    if(amount<=Balance)
    {
        Balance=Balance-amount;
    }
    else
    {
        cout<<"Insufficient Balance";
    }
}
void wheretootransfer(int amount)
{
    Balance=Balance+amount;
}

    void showinfo()
    {
        cout<<"Your Account name: "<<Account_name <<endl;
        cout<<"Your Account no: "<<Account_no <<endl;
        cout<<"Your Balance is: "<< Balance<<endl;
        cout<<"Your Account Type: "<< Account_type<<endl;
    }
};
int main()
{
    int a1;
    string a2,a3,a4;
    Bank account1,account2,account3;
    cout<<"Enter Your Account name: ";cin>>a2;cout<<endl;
    cout<<"Enter Your Account no: ";cin>>a3;cout<<endl;
    cout<<"Enter Your Balance is: ";cin>>a1;cout<<endl;
    cout<<"Enter Your Account Type: ";cin>>a4;cout<<endl;
    string ch;
    do
    {
        cout<<"MAIN MENU"<<endl;
        cout<<"1. ALL ACCOUNT HOLDER LIST"<<endl;
        cout<<"2. DEPOSIT AMOUNT"<<endl;
        cout<<"3. WITHDRAW AMOUNT"<<endl;
        cout<<"4. TRANSFER AMOUNT"<<endl;
        cout<<"5. EXIT"<<endl;

        cout << "Please input your choice: "<<endl;
        cin >> ch;
        switch (ch)
        {
        case 1:

            cout<<"ACCOUNT HOLDER LIST"<<endl;
            account1.showaccountinfo();
            account2.showaccountinfo();
            account3.showaccountinfo();
            break;

        case 2:
            int dep;

            cout<<"1. account1"<<endl;
            cout<<"2. account2"<<endl;
            cout<<"3. account3"<<endl;

            cout<<"Please choose the account you want to deposit (1-3) : ";
            cin>>dep;

            if(dep == 1)
                {
                    account1.deposit();
                break;
                }

            else if(dep == 2)
                {

                    account2.deposit();
                break;

            }

            else if(dep == 3){

                    account3.deposit();
                break;
            }

            break;

             case 3:
            int wit;

           cout<<"1. account1"<<endl;
            cout<<"2. account2"<<endl;
            cout<<"3. account3"<<endl;

            cout<<"Please choose the account you want to withdraw from (1-3) : ";
            cin>>wit;
            if(wit == 1){

                account1.withdraw();
                break;

            }

            else if(wit == 2){

                account2.withdraw();
                break;

            }

            else if(wit == 3){

                account3.withdraw();
                break;
            }

            break;

             case 4:
                 string account_from,account_to;

           cout<<"1. account1"<<endl;
            cout<<"2. account2"<<endl;
            cout<<"3. account3"<<endl;

            cout<<" Please choose the account you want to transfer from (1-3) : ";
            cin>>account_from;

            switch (account_from) {

            case 1:
                cout<<"2. account1"<<endl;
                cout<<"3. account2"<<endl;

                cout<<"Please choose the account you want to transfer to (1-2) : ";
                cin>>account_to;

                switch (transt){


                case 1:

                    cout<<"How much do you want to transfer?";
                    cin>>amount;

                      account1.transfer(amount);
                      account2.wheretootransfer(amount);

                    break;



                case 2:

                    cout<<"How much do you want to transfer?";
                    cin>>amount;

                      account1.transfer(amount);
                      account3.wheretootransfer(amount);

                    break;

                }
                break;
            case 2:
                 cout<<"1. account1"<<endl;
                cout<<"3. account2"<<endl;

                cout<<"Please choose the account you want to transfer to (1-2) : ";
                cin>>account_to;

                switch (account_to){

                case 1:

                    cout<<"How much do you want to transfer?";
                    cin>>amoun;

                    account2.transfer(amoun);
                    account1.wheretootransfer(amoun);

                    break;



                case 2:

                    cout<<"How much do you want to transfer?";
                    cin>>amoun;

                    account2.transfer(amount);
                    account3.wheretootransfer(amoun);

                    break;

                }
                break;

            case 3:
                cout<<"1. account"<<endl;
                cout<<"2. account"<<endl;

                cout<<"Please choose the account you want to transfer to (1-2) : ";
                cin>>account_to;

                switch (account_to){

                case 1:

                    cout<<"How much do you want to transfer?";
                    cin>>amoun;

                    account3.transfer(amoun);
                    account1.wheretootransfer(amoun);

                    break;


                case 2:

                    cout<<"How much do you want to transfer?";
                    cin>>amount;

                    account3.transfer(amount);
                    account2.wheretootransfer(amount);

                    break;


                }
                break;
                default:
                    cout<<" wrong";
            }
            break;





    }
























}
