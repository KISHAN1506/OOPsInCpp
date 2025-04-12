#include <iostream>
using namespace std;

template<class T1 = int ,class T2 =char >
class Example{
    public:
    T1 a;
    T2 b;
    Example(T1 a,T2 b){
        this->a = a;
        this->b = b;
    }
    void display(){
        cout<<a<<" "<<b<<endl;
    }
};

int main(){
    Example<> obj(3,'c');
    obj.display();

    Example<float,double> obj2(3.123,12322.33);
    obj2.display();
    return 0;
}