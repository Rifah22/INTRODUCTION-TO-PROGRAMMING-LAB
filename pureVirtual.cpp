#include<iostream>
using namespace std;
//Abstract class
class Person{
protected:
    string name;
public:
    Person(string n){name=n;}
    //pure virtual method
    virtual void ()=0;

};
class Student: public Person{
private:
    float cgpa;showDetails
public:
    Student(string n,float cg):Person(n){cgpa=cg;}
    void showDetails(){
        cout<<"This is Student's Details of "<<name<<" CGPA: "<<cgpa<<endl;
    }
    void showCgpa(){
    cout<<"CGPA:"<<cgpa<<endl;
    }
};

int main(){

    //Person p1("P1");
    Student s ("Student-1",3.8);
    Person *p=&s;

    p->showDetails();
    //Careful this is invalid
//   p->showCgpa();
    Student *test = (Student *)p;

    test->showCgpa();

return 0;
}

