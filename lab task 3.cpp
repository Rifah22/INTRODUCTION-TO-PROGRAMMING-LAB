#include<iostream>>
using namespace std;
class Rectangle
{
private:
    float length;
    float breadth;
    float area;
public:
    void setlength(float l)
    {
        length=l;
    }
    float getlength()
    {
        return length;
    }
    void setbreadth(float b)
    {
        breadth=b;
    }
    float getbreadth()
    {
        return breadth;
    }
    float setArea(float l,float b)
    {
        float area=l*b;
        return area;
    }

    float showresult()
    {
        cout<<"Lengh is : "<<length<<endl;
        cout<<"Breadth id : "<<breadth<<endl;
    }
};
int main()
{
    Rectangle o1;
    int a,b;
cout<<" Entre breadth ";
cin>>a;
cout<<endl;
cout<<"Enter hight ";
cin>>b;
cout<<endl;
    o1.setbreadth(a);
    o1.setlength(b);

    o1.showresult();
    cout<<"Area is"<<o1.setArea(a,b);
    return 0;
}

