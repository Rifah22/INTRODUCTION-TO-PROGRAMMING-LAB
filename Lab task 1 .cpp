#include<iostream>
using namespace std;


class Person
{
protected:
    string Name;
    int Age;
    string Id;
public:
    Person()
    {
        cout<<"Empty constructor "<<endl;
    }
    Person(string name,int age,string id)
    {
        Name=name;
        Age=age;
        Id=id;
    }
    ~Person()
    {
        cout<<"Distructor"<<endl;
    }
    showinfo0()
    {
        cout<<"Person Name "<< Name<<endl;
        cout<<"Person age "<< Age<<endl;
        cout<<"Person Id "<<Id <<endl;
    }
};
class Student:virtual public Person
{
public:
    float Cgpa;
    Student(float cgpa,string name,int age,string id):Person(name,age,id)
    {
        /*Name=name;
        Age=age;
        Id=id;*/
        Cgpa=cgpa;
    }
    showinfo1()
    {
        cout<<"Student name "<< Name<<endl;
        cout<<"Student Age "<< Age<<endl;
        cout<<"Student id "<< Id<<endl;
        cout<<"Student cgpa "<< Cgpa<<endl;
    }
};
class ScholarshipStudent : public Student
{
public:
    int Samount;
    ScholarshipStudent(int samount,float cgpa,string name,int age,string id):Student(cgpa,name,age,id)
    {
       /* Name=name;
        Age=age;
        Id=id;
        Cgpa=cgpa;*/
        Samount=samount;
    }
    showinfo2()
    {
        cout<<"ScholarshipStudent name "<<Name <<endl;
        cout<<"ScholarshipStudent Age "<<Age <<endl;
        cout<<"ScholarshipStudent Id "<<Id <<endl;
        cout<<"ScholarshipStudent cgpa "<< Cgpa<<endl;
        cout<<"ScholarshipStudent Scholarship Amount"<<Samount <<endl;
    }
};

class Employee : virtual public Person
{
public:
    int Salary;
    Employee(){}//empty constructor
    Employee(int salary,string name,int age,string id):Person(name,age,id)
    {
       /* Name=name;
        Age=age;
        Id=id;*/
        Salary=salary;
    }
    ~Employee(){}
    showinfo3()
    {
        cout<<"Emploee Name "<<Name <<endl;
        cout<<"Employee Age "<< Age<<endl;
        cout<<"Employee Id "<<Id <<endl;
        cout<<"Emplp+oyee Salary "<<Salary <<endl;
    }
};

class Officer : public Employee
{
public:
    Officer(int salary,string name,int age,string id):Employee(Salary,name,age,id)
    {
       /*  Name=name;
        Age=age;
        Id=id;
        Salary=salary;*/
    }
    showinfo4()
    {
        cout<<"Officer Name "<< Name<<endl;
        cout<<"Officer Age "<<Age <<endl;
        cout<<"Officer Id "<<Id <<endl;
        cout<<"Officer Salaey"<< Salary<<endl;
    }
};

class Faculty:public Employee
{
private:
    int salary;
public:
    Faculty(int salary,string name,int age,string id):Employee(Salary,name,age,id)
    {
        /* Name=name;
        Age=age;
        Id=id;*/
        Salary=salary;
    }
    showinfo5()
    {
        cout<<"Faculty Name "<<Name<<endl;
        cout<<"Faculty Age "<<Age<<endl;
        cout<<"Faculty Id "<<Id<<endl;
        cout<<"Faculty Salary "<<Salary<<endl;
    }
};
class TA:public Employee, public Student
{
public:
    int Cost;
    TA(int cost,string name,string id,int age,float cgpa): Employee(Salary,name,age,id),Student(cgpa,name,age,id),Person(name,age,id)
    {
      /*  Name=name;
        Id=id;
        Age=age;
        Cgpa=cgpa;*/
        Cost=cost;
    }
    showinfo6()
    {
        cout<<"TA Name "<<Name<<endl;
        cout<<"TA Age "<<Age<<endl;
        cout<<"TA Id"<<Id<<endl;
        cout<<"TA Cgpa"<<Cgpa<<endl;
        cout<<"TA cost"<<Cost<<endl;
    }
};


int main()
{
int ch;

Student o1(4.00,"Anik",21,"22-47127-1");
ScholarshipStudent o2(20000,4.00,"Anik",21,"22-47127-1");
TA o3(8000,"Robin","18-27126-2",28,3.85);
Employee o4(50000,"Enames",35,"2-22344-9");
Faculty o5(500000,"Anika",24,"22-44353-1");
Officer o6(1000000,"Officer",45,"099-232424-9");

do
{
    cout<<"     MAIN MINU"<<endl;
    cout<<"1. See Student info "<<endl;
    cout<<"2. See ScholarshipStudent info"<<endl;
    cout<<"3. See TA info "<<endl;
    cout<<"4. See Employee info "<<endl;
    cout<<"5. See Faculty info "<<endl;
    cout<<"6. See Officer info "<<endl;
    cout<<"7. Exit"<<endl;
    cout<<" Please enter your choice (1-7)"<<endl;
    cin>>ch;cout<<endl;
    switch(ch)
    {
case 1:
        o1.showinfo1();
        break;

    case 2:
    o2.showinfo2();
    break;

    case 3:
    o3.showinfo6();
    break;

    case 4:
    o4.showinfo3();
    break;

    case 5:
    o5.showinfo5();
    break;

    case 6:
    o6.showinfo4();
    break;

    case 7:
    break;
    default:
        cout << "Wrong Option" << endl;
   }
}
while(ch!=7);
return 0;

}
