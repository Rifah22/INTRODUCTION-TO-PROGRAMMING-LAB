#include<iostream>
#include<math.h>
using namespace std;
class Box
{
private:
    float length;
    float breadth;
    float hight;
    float v;
public:
    void setlength(float n)
    {
        length=n;
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

    void sethigth(float h)
    {
        hight=h;
    }
    float gethight()
    {
        return hight;
    }
    void setv(float a, float b, float c)
    {
        hight=a;
        breadth=b;
        length=c;
        v=hight*breadth*length;
    }
    float getv()
    {
        return v;
    }
    void showBox()
    {
        cout<<"langth is :"<<length<<endl;
        cout<<"breadth is :"<<breadth<<endl;
        cout<<"hight is :"<<hight<<endl;
    }
};
int main()
{
    Box o1;

    o1.setlength(4.00);
    o1.sethigth(5.00);
    o1.setbreadth(6.00);
    o1.showBox();
    o1.setv(4,5,6);
    cout<<"volume is :"<<o1.getv();
return 0;
}
