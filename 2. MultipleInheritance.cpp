#include<iostream>
using namespace std;
class Teacher{
protected:
    int anik;
public:
    Teacher(){
        cout<< "Teacher Constructor"<<endl;
    }
    Teacher(int a)
    {
        anik=a;
    }
};

class Student{
protected:
    int R;
public:
    Student(){
        cout<< "Student Constructor"<<endl;
    }
    Student(int n)
    {
        R=n;

    }
};
//Multiple Inheritance
class TA: public Teacher,public Student{
public:
    TA(int a,int b):Teacher(a),Student(n)
    {

    }
    TA():Teacher(),Student(){
        cout<< "TA Constructor"<<endl;
    }
    int getage()
    {
        return anik+R;
        cout<<anik+R<<endl;
    }
};

int main(){
    Teacher a1(32);
    Student a2(18);
    TA a;
    a.getage();
return 0;
}

