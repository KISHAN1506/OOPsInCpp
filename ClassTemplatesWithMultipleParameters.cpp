#include <iostream>
using namespace std;

/*
template<class T1,class T2>
class nameOfClass{
    // body
}
*/

template<class T1,class T2>
class MyClass{
    public:
    T1 data1;
    T2 data2;

    void display(){
        cout<<data1<<" "<<data2<<endl;
    }
};

int main(){
    MyClass<float,char> obj;
    obj.data1 = 13.23;
    obj.data2 = 'd';
    obj.display();

    MyClass<float,float> obj2;
    obj2.data1 = 13.23;
    obj2.data2 = 82.33;
    obj2.display();

    return 0;
}