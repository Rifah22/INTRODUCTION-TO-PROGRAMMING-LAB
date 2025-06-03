#include<iostream>
using namespace std;
class Employee
{
private:
   string name="";
   string year_of_joining="";
   string salary="";
   string address="";

public:
   string setname(string n1)
   {
       name=n1;
       return name;
   }
   string setyear_of_joining(string n2)
   {
       year_of_joining=n2;
       return year_of_joining;
   }
   string setsalary(string n3)
   {
       salary=n3;
       return salary;
   }
   string setaddress(string n4)
   {
       address=n4;
       return address;
   }
   void showinfo()
   {
       cout<<"Name : "<<name<<endl;
       cout<<"Year of joining : "<<year_of_joining<<endl;
       cout<<"Address : "<<address<<endl;
       cout<<"Salary : "<<salary<<endl;
   }
};
int main()
{
    Employee e1,e2,e3;

    e1.setname("Robert");
    e1.setyear_of_joining("1994");
    e1.setaddress("64C- WallsStreat");
    e1.setsalary("22k");
    e1.showinfo();

    e2.setname("Sam");
    e2.setyear_of_joining("2000");
    e2.setaddress("68D- WallsStreat");
    e2.setsalary("18k");
    e2.showinfo();

    e3.setname("John");
    e3.setyear_of_joining("1999");
    e3.setaddress("26B- WallsStreat");
    e3.setsalary("12k");
    e3.showinfo();
    return 0;
}
