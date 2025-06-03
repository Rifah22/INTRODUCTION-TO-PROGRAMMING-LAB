#include<iostream>
using namespace std;
class Student
{
private:
    string name="";
    string address="";
    int roll;
    string phone;
public:
    string setname(string n)
    {
        name=n;
        return name;
    }
    string setaddress(string m)
    {
        address=m;
        return address;
    }
    int setroll(int r)
    {
        roll=r;
        return roll;
    }
    string setnumber(string nn)
    {
        phone=nn;
        return phone;
    }
    void show()
    {
        cout<<name<<endl;
        cout<<address<<endl;
        cout<<roll<<endl;
        cout<<phone<<endl;
    }
};
int main()
{
    Student o1,o2;

    o1.setname("Sam");
    o1.setaddress("dhaka");
    o1.setnumber("01777777777");
    o1.setroll(01);

    o2.setname("John");
    o2.setaddress("Barisal");
    o2.setnumber("01799999999");
    o2.setroll(02);

    o1.show();
    o2.show();

    return 0;
}
