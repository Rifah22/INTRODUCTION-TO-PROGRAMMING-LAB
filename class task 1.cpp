 #include<iostream>
 using namespace std;
 class Box
 {
 public:
    float height, width, length;
    Box(){}
    Box(float h,float w, float l)
    {
        height=h;
        width=w;
        length=l;
    }
    Box operator + (Box box2) {
         Box newbox1;
         cout<<"Adding"<<endl;
         newbox1.height=height+box2.height;
         newbox1.width=width+box2.width;
         newbox1.length=length+box2.length;
         return newbox1;
    }
    Box operator * (Box obj)//first breaket er vetore obj or box2 jekunotai hobe.
    {
         Box newbox2;
         cout<<"Multiplying"<<endl;
         newbox2.height=(height*obj.height);
         newbox2.width=(width*obj.width);
         newbox2.length=(length*obj.length);
         return newbox2;
    }

    showinfo()
             {
                cout<<"New hight is "<<height<<endl;
                cout<<"New width is "<<width<<endl;
                cout<<"New length is "<<length<<endl;
             }

 };

 int main()
 {
     float hi,we,le,h1,w1,l1;
     cout<<"Enter the values of Box1 height , width & lendth";
     cin>>hi;cin>>we;cin>>le;
     cout<<endl;
     cout<<"Enter the values of Box2 height , width & lendth";
     cin>>h1;cin>>w1;cin>>l1;
     cout<<endl;
     Box box1(hi,we,le),box2(h1,w1,l1);
     Box Newbox1=box1+box2;
     Box Newbox2=box1*box2;
     Newbox1.showinfo();
     Newbox2.showinfo();
     return 0;
 }
