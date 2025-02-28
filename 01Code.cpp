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

/*
Constructor : It gets automatically at the time of object creation.
It is only called once at the time of object creation.
constructor should also be made public since it is being called by main function.
When the class (Blue print) is made at that time as such no space is allocated 
the main space is allocated during the time of object creation.

Memory allocation happens when constructor is called

Constructor has 3 types:

1. Non Parameterized Constructor
2. Parameterized Constructor
3. Copy Constructor
*/

class Account{
private:
    double balance;
    string password; // data hiding is getting implemented here using Encapsulation
public:
    string accID;
    string username;
};

class Teacher{
private:
    double salary;
public:
    // We can have both the constructor 
    // Just we should have either number of parameters different
    // or the datatype of the parameters should be different
    // Having these 2 type of Constructor is called "Constructor Overloading"
    // Constructor Overloading is an example of polymorphism

    // Non Parameterized Constructor
    Teacher(){
        dept = "Computer Science";
    } 
    // Parameterized Constructor

    //  this is a pointer which points towards the memory location where the object is created
    // *(this).prop == this->prop
    Teacher(string name,string dept,string subject,double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
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
    void getInfo(){
        cout<<"Name: "<< name<<" Subject: "<<subject;
    }
};


int main(){
    Teacher t1("Kishan","CS","OOPs",25000);
    t1.getInfo();

    return 0;
}