#include <iostream>
using namespace std;

class Student{
public:
    string name;
    double* cgpaPtr;

    Student(string name,double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    // shallow copy
    // Student(Student &obj){
    //     this->name = obj.name;
    //     this->cgpaPtr = obj.cgpaPtr;
    // }
    // deep copy 
    // we will create a new space in heap as cgpaPtr and assign the value of the earlier cgpaPtr
    Student(Student &obj){
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *(obj.cgpaPtr);
    }
    
    void getInfo(){
        cout<<"Name : "<<name<<endl<<"cgpa : "<<*cgpaPtr<<endl;
    }
};

int main(){
    Student s1("Kishan",9.06);
    Student s2(s1);
    // Issue is we just changed the value of s2 but it got changed for s1 also
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();
    s2.name = "ksjdhkf";
    s2.getInfo();
    return 0;
}