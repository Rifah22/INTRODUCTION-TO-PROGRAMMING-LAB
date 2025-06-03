3#include<iostream>
using namespace std;

// complex number= 5+2i
class Complex {
public:
    int real, imag;
    // Empty Constructor
    Complex(){    }

    //Parameterized Constructor
    Complex(int r, int i){
        real = r;
        imag = i;
    }

    //Method for printing complex number
        void print(){
        //Example: 5+3i
        //Example: 5-3i
        //when imaginary part is positive
        if(imag>0){cout << real << "+" << imag<<"i" << endl;}
        //when imaginary part is negative
        else if(imag<0){cout << real<<imag<<"i" << endl;}
        //when imaginary part is 0
        else {cout << real<< endl;}
    }

    //Method for adding complex number
    Complex addComplex(Complex obj){
            Complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
    }

    // This is automatically called when '+' is used with
    // between two Complex objects
    Complex operator + (Complex obj) {
         Complex res;
         cout<<"Adding"<<endl;
         res.real = real + obj.real;
         res.imag = imag + obj.imag;
         return res;
    }

    // This is automatically called when '*' is used with
    // between two Complex objects
    Complex operator * (Complex obj) {
         Complex res;
         cout<<"Multiplying"<<endl;
         res.real = (real * obj.real) + (imag*obj.imag * (-1));
         res.imag = (real*obj.imag) + (imag*obj.real);
         return res;
    }

     Complex operator *(int n){

        Complex res;
        res.real = real * n;
        res.imag = imag * n;
    return res;
    }


};

int main()
{
    Complex c1(5, 2), c2(4, -3);

    //5+2i
    c1.print();
    //4-3i
    c2.print();

    Complex t;
    //Adding two complex number using addComplex method
    t = c1.addComplex(c2);
    t.print();



    //Adding two complex number using  + Operator Overload
    Complex c3 = c1 + c2;
    c3.print();

    c3 = c1+c2+c1+c1+c2;

    //Complex Number Multiplication
    // Result_real = real1 * real2 + img1 * img2 * (-1);
    // Result_img = real1 * img2 + img1 * real2;

    // c1 * c2 = (5+2i) * (4-3i) = 5(4-3i) + 2i(4-3i)
                                                 //= 20 - 15i + 8i - 6i*i
                                                 //= 20 - 15i + 8i - 6(-1)

    //Result_real = 20 + 6 = 26
    //Result_img =  -15i + 8i = -7i
    //c1*c2 = 26-7i

    Complex c4 =  c1 * c2;

    c4.print();

    c4 =  c1 * c2 + c1*c2;
    c4.print();

    c4 = c1*2;
    c4.print();



return 0;
}
