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


int main(){
    Teacher t1; 
    t1.name = "Kishan";
    t1.subject = "CPP";
    t1.SetSalary(25000);
    cout<<t1.GetSalary();
    return 0;
}