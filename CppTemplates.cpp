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
    // vectorr v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 1;
    // vectorr v2(3);
    // v2.arr[0] = 1;
    // v2.arr[1] = 0;
    // v2.arr[2] = 1;

    // int ans = v1.dotProduct(v2);
    // cout<<ans<<endl;

    
    vectorr<float> v1(3);
    v1.arr[0] = 4.2;
    v1.arr[1] = 3.2;
    v1.arr[2] = 1.2;
    vectorr<float> v2(3);
    v2.arr[0] = 1.2;
    v2.arr[1] = 0.2;
    v2.arr[2] = 1.2;

    float ans = v1.dotProduct(v2);
    cout<<ans<<endl;


    return 0;
}