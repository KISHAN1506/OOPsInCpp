#include <iostream>
using namespace std;

// Inheritance : When the properties of the base/parent class is passed on the derived/child class
// Inheritance is mainly for code reusability
// while creating a student class, first the constructor of base class is called then of derived class



/*

+-------------+----------------------------+---------------------+-------------+
|                             | Derived Class | Derived Class  | Derived Class |
| Base Class / Parent Class   | Private Mode  | Protected Mode | Public Mode   |
+-------------+---------------+----------------+-------------+
| Private                     | Not Inherited | Not Inherited  | Not Inherited |
| Protected                   | Private       | Protected      | Protected     |
| Public                      | Private       | Protected      | Public        |
+-------------+----------------------------+---------------------+-------------+


*/
class Person{
public:
    string name;
    int age;

    Person(string name,int age){
        this->name = name;
        this->age = age;
    }

    // Person(){
    //     cout<<"Base class's Constructor\n";
    // }
    // ~Person(){
    //     cout<<"Parent class's destructor\n";
    // }
};

class Student : public Person{
// name, age, rollno
public:
    int rollno;
    
    Student(string name,int age,int rollno) : Person(name,age){
        this->rollno = rollno;
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No: "<<rollno<<endl;
    }

    // Student(){
    //     cout<<"Student class's Constructor\n";
    // }
    // ~Student(){
    //     cout<<"Student class's destructor\n";
    // }
};

int main(){
    Student s1("Kishan",18,123);
    s1.getInfo();
    return 0;
}