#include<iostream>
using namespace std;

class Test{
public:
    //This is function/method overloading
    /*The methods will have the same name but different
     signature
    */

    //signature means method name with parameter list along with parameters data type.

    // testMethod Signatures
    //testMethod()
    //testMethod(int)
    //testMethod(double)
    //testMethod(char)

    void testMethod(){
    cout<<"Test Method with empty parameter"<<endl;
    }

    void testMethod(int i){
    cout<<"Test Method with Int parameter"<<endl;
    }

    void testMethod(bool i){
    cout<<"Test Method with bool parameter"<<endl;
    }

    void testMethod(float f){
    cout<<"Test Method with Float parameter"<<endl;
    }

    void testMethod(double f){
    cout<<"Test Method with Double parameter"<<endl;
    }

    void sum(int a,int b){
    cout<<"Sum of int + int :"<<a+b<<endl;
    }

    void sum(float a,float b){
    cout<<"Sum of float + float :"<<a+b<<endl;
    }
    void sum(float a,int b){
    cout<<"Sum of float + int :"<<a+b<<endl;
    }
    void sum(int a,int b,int c){
    cout<<"Sum of int + int  + int :"<<a+b+c<<endl;
    }
};


int main(){
    Test t;

    t.testMethod();
    t.testMethod(20);
    t.testMethod((float)30.33);
    t.testMethod(30.33f);
    t.testMethod(30.33);

    t.sum(5,6);
    t.sum(5,6,7);
    t.sum(5.5f,5.5F);
return 0;
}
