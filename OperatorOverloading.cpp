#include <iostream>
using namespace std;

class Complex{
    public:
    int real;
    int imag;

    Complex(){
        real = 0;
        imag = 0;
    }

    Complex(int real,int imag){
        this->real = real;
        this->imag = imag;
    }

    Complex operator +(Complex c1){
        Complex temp;
        temp.real = real + c1.real;
        temp.imag = imag + c1.imag;
        return temp;
    }

    void display(){
        cout<<real<<"+ "<<imag<<"i"<<endl;
    }
};

int main(){
    Complex c1(2,4);
    Complex c2(8,7);

    Complex c3 = c1+c2; // c3 = c1.add(c2)
    // if c = c1 + c2 + c3 --> c1.add(c2.add(c3))
    c3.display();
    return 0;
}