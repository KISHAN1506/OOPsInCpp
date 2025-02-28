#include <iostream>
#include <string>
using namespace std;

// objects are entities in real world
// class are blueprint of those entities
// general Syntax for creating class:
// class Teacher{
    
// };
// all the properties and methods are written in this class body only

/* 
Access Modifiers :
1.private : Data and members accessible inside the class
2.public : Data and members accessible to everyone
3.protected : data and members accessible inside the class and to its derivative class
*/

/*
4 major pillars in OOPs:

1.Encapsulation
2.Abstraction
3.Inheritance
4.Polymorphism

*/

/* 
Encapsulation: Encapsulation is wrapping up of data and member functions in a single unit class called class.

Encapsulation helps us in data hiding ---> we can make a attribute private and 

*/


class Teacher{
private:
    double salary;
public:
    // properties or attributes
    string name;
    string dept;
    string subject;

    //methods or member functions
     
    void changeDept(string newDept){
        dept = newDept; 
    }
    // using this function I can change salary outside the function but cannot view the salary
    //Setter Function (for private data)
    void SetSalary(double newSal){
        salary = newSal;
    }
    //Getter Function (for private data)
    double GetSalary(){
        return salary;
    }
};


class Account{
private:
    double balance;
    string password; // data hiding is getting implemented here using Encapsulation
public:
    string accID;
    string username;
};


int main(){
    Teacher t1; 
    t1.name = "Kishan";
    t1.subject = "CPP";
    t1.SetSalary(25000);
    cout<<t1.GetSalary()<<endl;
    return 0;
}