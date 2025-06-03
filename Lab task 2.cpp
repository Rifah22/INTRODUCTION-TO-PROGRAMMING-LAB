#include<iostream>
using namespace std;
class Account
{
private:
    int acc=30000;
public:
    Account(){}
    Account(int tk)
    {
        acc+=tk;
    }
    Account operator +(int n){

        Account res;
        res.acc = acc + n;
    return res;
    }
    showinfo()
    {
        cout<<"new acc is "<<acc<<endl;
    }
};
int main()
{
    int m;
    cout<<"Enter the amount of adding ";
    cin>>m;cout<<endl;

    Account balance(m);//this n and the an of the privet section is not same;

    balance.showinfo();

}
