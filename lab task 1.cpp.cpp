#include<iostream>
using namespace std;
class Student
{
public:
    string name="";
    int id;
    void show(){cout<<name<<endl<<id;}
};


int main()
{
   Student obj1;
   obj1.name="John";
   obj1.id=2222;
   obj1.show();
   return 0;
}
