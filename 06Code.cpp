#include <iostream>
using namespace std;

// Polymorphism - Polymorphism is the ability of the object to take on different form 
// or behave in different ways depending on the context in which they are used
// One of the classical example is Constructor Overloading

/*
Polymorphism is of 2 types:

1. Compile time polymorphism - Eg. Constructor Overloading
2. Run time polymorphism


Function overloading is when we have 2 function with the exact same name 
but they only differ by their parameters
*/

class Student{
public:
    string name;

    Student(){
        cout<<"Non Parameterized Constructor"<<endl;
    }
    
    Student(string name){
        cout<<"Parameterized Constructor"<<endl;
        this->name = name;
    }
};

int main(){
    Student s1;
    Student s2("Kishan");

    return 0;
}