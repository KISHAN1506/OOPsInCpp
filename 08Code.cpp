#include <iostream>
using namespace std;

/*
Overriding ---> Inheritance
if both child and parent class have function from same name 
it get decided by if we create an object of the child class then child class's function 
is considered and parent class function is overriden
*/

/*
Virtual clas:
1. Virtual functions are Dynamic in nature.
2. Defined by the keyword "virtual" inside a base class and are always declared with a base
class and overridden in a child class.
3. A virtual function is called during Runtime
*/

class Parent{
public:
    void getInfo(){
        cout<<"Parent Class"<<endl;
    }

    virtual void hello(){
        cout<<"Hello from Parent\n";
    }
};

class child:public Parent{
public:
    void getInfo(){
        cout<<"Child Class"<<endl;
    } 
    void hello(){
        cout<<"Hello from Child\n";
    } 
};

int main(){
    child c1;
    c1.getInfo();
    Parent p1;
    p1.getInfo();
    c1.hello();
    return 0;
}