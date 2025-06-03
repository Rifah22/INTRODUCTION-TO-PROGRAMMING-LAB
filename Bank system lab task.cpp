#include <iostream>
using namespace std;

class Account {
private:
    int acno;
    string name;
    long balance;
    string accounttype;

public:
    Account(){

    }

    Account(string a, int b, long c, string d){

        name = a;
        acno = b;
        balance = c;
        accounttype = d;

    }

    ~Account(){}

    void showaccountinfo(){

        cout<<acno<<"   "<<name<<"          "<<accounttype<<"           "<<balance<<endl;
    }


    void Deposit()
    {
        long amt;
        cout << " Enter tour deposit amount "<<endl;
        cin >> amt;
        balance = balance + amt;
    }
    void Withdrawal(){

        long amt;
        cout << " Enter your withdrawal amount "<<endl;
        cin >> amt;
        if (amt <= balance)
            balance = balance - amt;
        else
            cout << " Low Balance..." << endl;
    }

    void transferfrom(long amt){

        if (amt <= balance)
            balance = balance - amt;
        else
            cout << " Low Balance..." <<endl;

    }

    void transferto(long amt){

        balance = balance + amt;

    }

};

int main()
{
    int ch;
    long amt;
    int transt, transf;

    Account b1("Asif", 22471351, 500, "Savings");
    Account b2("Anik", 22471341, 600, "Current");
    Account b3("Abir", 22471331, 700, "Savings");


    do {
        cout<<" MENU"<<endl;
        cout<<" 1. ALL ACCOUNT HOLDER LIST"<<endl;
        cout<<" 2. DEPOSIT AMOUNT"<<endl;
        cout<<" 3. WITHDRAW AMOUNT"<<endl;
        cout<<" 4. TRANSFER AMOUNT"<<endl;
        cout<<" 5. EXIT";

        cout << " Please input your choice: "<<endl;
        cin >> ch;

        switch (ch) {
        case 1:

            cout<<" ACCOUNT HOLDER LIST "<<endl;
           // cout<<"\t\t\t\t\t====================================================\n";
           // cout<<"\t\t\t\t\tA/c no.      NAME           Type         Balance\n";
           // cout<<"\t\t\t\t\t====================================================\n";
            b1.showaccountinfo();
            b2.showaccountinfo();
            b3.showaccountinfo();
            break;

        case 2:
            int dep;

            cout<<"1. Asif"<<endl;
            cout<<"2. Anik"<<endl;
            cout<<"3. Abir"<<endl;

            cout<<"Please choose the account you want to deposit (1-3) : "<<endl;
            cin>>dep;

            if(dep == 1){

                b1.Deposit();
                break;

            }

            else if(dep == 2){

                b2.Deposit();
                break;

            }

            else if(dep == 3){

                b3.Deposit();
                break;
            }

            break;

        case 3:
            int wit;

            cout<<"1. Asif"<<endl;
            cout<<"2. Anik"<<endl;
            cout<<"3. Abir"<<endl;

            cout<<"Please choose the account you want to withdraw from (1-3) : "<<endl;
            cin>>wit;

            if(wit == 1){

                b1.Withdrawal();
                break;

            }

            else if(wit == 2){

                b2.Withdrawal();
                break;

            }

            else if(wit == 3){

                b3.Withdrawal();
                break;
            }

            break;

        case 4:

            cout<<"1. Asif"<<endl;
            cout<<"2. Anik"<<endl;
            cout<<"3. Abir"<<endl;

            cout<<"Please choose the account you want to transfer from (1-3) : "<<endl;
            cin>>transf;

            switch (transf) {

            case 1:
                cout<<"1. Anik"<<endl;
                cout<<"2. Abir"<<endl;

                cout<<"Please choose the account you want to transfer to (1-2) : "<<endl;
                cin>>transt;

                switch (transt){

                case 1:

                    cout<<"How much do you want to transfer?"<<endl;
                    cin>>amt;

                    b1.transferfrom(amt);
                    b2.transferto(amt);

                    break;



                case 2:

                    cout<<"How much do you want to transfer?"<<endl;
                    cin>>amt;

                    b1.transferfrom(amt);
                    b3.transferto(amt);

                    break;

                }
                break;
                default:
                    cout<<"wrong";
            case 2:
                cout<<"1. Asif"<<endl;
                cout<<"2. Abir"<<endl;

                cout<<"Please choose the account you want to transfer to (1-2) : "<<endl;
                cin>>transt;

                switch (transt){

                case 1:

                    cout<<"How much do you want to transfer?"<<endl;
                    cin>>amt;

                    b2.transferfrom(amt);
                    b1.transferto(amt);

                    break;



                case 2:

                    cout<<"How much do you want to transfer?"<<endl;
                    cin>>amt;

                    b2.transferfrom(amt);
                    b3.transferto(amt);

                    break;

                }
                break;

            case 3:
                cout<<"1. Asif"<<endl;
                cout<<"2. Anik"<<endl;

                cout<<"Please choose the account you want to transfer to (1-2) : "<<endl;
                cin>>transt;


                switch (transt){

                case 1:

                    cout<<"How much do you want to transfer?"<<endl;
                    cin>>amt;

                    b3.transferfrom(amt);
                    b1.transferto(amt);

                    break;


                case 2:

                    cout<<"How much do you want to transfer?"<<endl;
                    cin>>amt;

                    b3.transferfrom(amt);
                    b2.transferto(amt);

                    break;


                }
                break;

            }
            break;



        case 5:
            cout << "Have a nice day" << endl;
            break;
        default:
            cout << "Wrong Option" << endl;
        }
    }
    while (ch != 5);
    return 0;
}


