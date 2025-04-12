#include <iostream>
using namespace std;

template <class T>
class Kishan{
public:
    T data;
    Kishan(T data){
        this->data = data;
    }
    void display();
};
 
template <class T>
void Kishan<T> :: display(){
    cout<<data;
}


void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}


int main(){
    // Kishan<int> h(5.7);
    // cout << h.data << endl;
    // h.display();

    func(4);
    func('c');
    return 0;
}
