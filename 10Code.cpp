#include <iostream>
using namespace std;

/*
Abstract Classes:

1. Abstract classes are used to provide a base class from which other classes can be derived.
2. They cannot be instantiated(their object cannot be made) and are meant to be inherited.
3. Abstract classes are typically used to define an interface for derived classes.
*/


class Shape{ // abstract class
    virtual void draw() = 0; // pure virtual function
};

class Circle : public Shape{
    public:
    void draw(){
        cout<<"Drawing a circle";
    }
};

int main(){
    Circle c1;
    c1.draw();
    return 0;
}