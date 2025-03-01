#include <iostream>
using namespace std;

/*
// Multilevel Inheritance
class Person{
public:
    string name;
    int age;

};

class Student : public Person{
// name, age, rollno
public:
    int rollno;
};

class GradStudent : public Student{
public:
    string researchArea;
    
};
*/


/*
// Multiple Inheritance
class Student{
public:
    string name;
    int rollno;
};

class Teacher{
public:
    string subject;
    double salary;
};

class TA : public Student , public Teacher{
public:
    string ResearchArea;
};


*/ 

// Hierarchial Inheritance  ---> 1 to many 

class Person{
public:
    string name;
    int age;
};

class Student : public Person{
public:
    int rollno;
};

class Teacher : public Person{
public:
    string subject;
};


// Hybrid Inheritance : Mix of all type of Inheritance


int main(){
    // TA t1;
    // t1.name = "KISHAN";
    // t1.salary = 25000;
    // t1.ResearchArea = "Geo";
    // cout<<t1.ResearchArea<<endl;
    // cout<<t1.name<<endl;

}