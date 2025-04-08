#include <iostream>
#include <cmath>
using namespace std;

int GCD(int num1,int num2){
    int gcd = 1;
    for(int i = 0;i<min(num1,num2);i++){
        if(num1 % i == 0 && num2 % i == 0){
            gcd = i;
        }
    }
    return gcd;
}

class Fraction{
public:
    int num,den;
    Fraction operator+(const Fraction& other) const{
        Fraction temp;
        temp.num = num * other.den + den*other.num;
        temp.den = den * other.den;
        int gcdval = GCD(temp.num,temp.den);
        temp.num /= gcdval;
        temp.den /= gcdval;
        return temp;
    }

};

int main(){
    Fraction f1;
    Fraction f2;
    cin>>f1.num>>f1.den>>f2.num>>f2.den;
    Fraction f3 = f1+f2;
    cout<<f3.num<<"/"<<f3.den;
    return 0;
}