#include<iostream>
using namespace std;
class Mobile
{
private:
    string Mobile_Owner_Name;
    string Mobile_Number;
    float Mobile_Balance;
    string Mobile_Os_Name;
    bool Lock_Status;

public:
    void setownername(string name)
    {
        Mobile_Owner_Name=name;
    }
    string getownername()
    {
        return Mobile_Owner_Name;
    }

    void setmbnumber(string number)
    {
        Mobile_Number=number;
    }
    string getmbnumber()
    {
        return Mobile_Number;
    }

    void setmbalance(float blns)
    {
        Mobile_Balance=blns;
    }
    float getmblance()
    {
        return Mobile_Balance;
    }

    void setmbosname(string os)
    {
        Mobile_Os_Name=os;
    }
    string getmbosname()
    {
        return Mobile_Os_Name;
    }

    void setlock(bool lok)
    {
        Lock_Status=lok;
    }
    bool getlock()
    {
        return Lock_Status;
    }

    void showinfo()
    {
        cout<<"Mobile_Owner_Name "<<Mobile_Owner_Name<<endl;
        cout<<"Mobile_Number "<<Mobile_Number<<endl;
        cout<<"Mobile_Balance "<<Mobile_Balance<<endl;
        cout<<"Mobile_Os_Name "<<Mobile_Os_Name<<endl;
        cout<<"Lock_Status "<<Lock_Status<<endl;
    }
Mobile()
{
    Mobile_Owner_Name="";
    Mobile_Number="";
    Mobile_Balance;
    Mobile_Os_Name="";
    Lock_Status;

    cout<<"Empty"<<endl;
}

Mobile(string name,string number,float blns,string os,bool lok)
{
    Mobile_Owner_Name=name;
    Mobile_Number=number;
    Mobile_Balance=blns;
    Mobile_Os_Name=os;
    Lock_Status=lok;

}
int recharge(float bl)
{
    Mobile_Balance=Mobile_Balance+bl;
    cout<< "New balance is "<<Mobile_Balance<<endl;

}

int callsomeone(int t)
{
    if(Lock_Status==0)
    {
       Mobile_Balance=Mobile_Balance-t*0.5;
       cout<<"New Mobile_Balance "<<Mobile_Balance<<endl;
    }
    else
    {
       cout<<"Your phone is locked "<<endl;
    }
}
~Mobile()
{

}
};

int main()
{
    string n,m,o;
    int b,bll,time;
    bool L;
    cout<<"entwr Mobile_Owner_Name ";
    cin>>n;
    cout<<endl;

    cout<<"entwr Mobile_Number ";
    cin>>m;
    cout<<endl;

    cout<<"entwr Mobile_Balance ";
    cin>>b;
    cout<<endl;

    cout<<"entwr Mobile_Os_Name ";
    cin>>o;
    cout<<endl;

    cout<<"entwr Lock_Status ";
    cin>>L;
    cout<<endl;

     Mobile b1(n,m,b,o,L);

    b1.showinfo();
    cout<<"entwe recharge amount ";
    cin>>bll;
    cout<<endl;
    b1.recharge(bll);
    cout<<"Your talk time in int ";
    cin>>time;
    cout<<endl;
    b1.callsomeone(time);
    return 0;
}
