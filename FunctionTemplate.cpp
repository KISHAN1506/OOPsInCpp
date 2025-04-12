#include <iostream>
using namespace std;

template<class T1,class T2>
float funcAvg(T1 num1 , T2 num2){
    float avg = (num1+num2)/2.0;
    return avg;
}

template<class T>
void swapp(T &a ,T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    float ans = funcAvg(3,4);
    cout<<ans<<endl;
    
    int a = 5;
    int b = 8;
    swapp<int>(a,b);
    cout<<a<<" "<<b;



    return 0;
}