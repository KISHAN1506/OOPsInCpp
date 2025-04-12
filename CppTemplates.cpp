#include <iostream>
using namespace std;

// https://www.youtube.com/watch?v=SuiGXMqGKak&ab_channel=CodeWithHarry

// Templates are also sometimes called Parameterized Classes
/*
Why use templates:

1. We follow DRY principle (Don't Repeat Yourselves)
2. We can do generic programming (for any data type)

*/

template <class T>
T add(T num1,T num2){
    return num1 + num2;
}


template <class T>
class vectorr{
    public:
    T* arr;
    int size;
    vectorr(int m){
        size = m;
        arr = new T[size];
    }
    T dotProduct(vectorr &v){
        T d = 0;
        for(int i = 0;i<size;i++){
            d+=this->arr[i]* v.arr[i];
        }
        return d;
    }
};

int main(){
    // vectorr<int> v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 1;
    // vectorr<int> v2(3);
    // v2.arr[0] = 1;
    // v2.arr[1] = 0;
    // v2.arr[2] = 1;

    // int ans = v1.dotProduct(v2);
    // cout<<ans<<endl;

    
    // vectorr<float> v3(3);
    // v3.arr[0] = 4.2;
    // v3.arr[1] = 3.2;
    // v3.arr[2] = 1.2;
    // vectorr<float> v4(3);
    // v4.arr[0] = 1.2;
    // v4.arr[1] = 0.2;
    // v4.arr[2] = 1.2;

    // float ans2 = v3.dotProduct(v4);
    // cout<<ans2<<endl;

    // Either you can use auto or make specific datatype and then call function from templete
    auto num1 = 20;
    auto num2 = 30;
    auto answer = add(num1,num2);
    cout<<answer<<endl;


    auto num3 = 20.34;
    auto num4 = 30.94;
    auto answer2 = add(num3,num4);
    cout<<answer2<<endl;
    return 0;
}