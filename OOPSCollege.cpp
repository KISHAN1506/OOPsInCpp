// You are using GCC
#include <iostream>
using namespace std;

class Person{
public:
    string name;
    string dob;
    string email;
    int phone;
    string gender;
    
    Person(string name,string dob,string email,int phone,string gender){
        this->name = name;
        this->dob = dob;
        this->email = email;
        this->phone = phone;
        this->gender = gender;
    }
};

class Student:public Person{
public:
    int reg_no;
    float marks1;
    float marks2;
    float marks3;
    float avrgggg(){
        float avrgg = (marks1 + marks2 + marks3)/3.0;
        return avrgg;
    }
    Student(string name,string dob,string email,int phone,string gender,int reg_no,float marks1,float marks2,float marks3):Person(name,dob,email,phone,gender){
        this->reg_no = reg_no;
        this->marks1 = marks1;
        this->marks2 = marks2;
        this->marks3 = marks3;
    }
};

class Employee:public Person{
public:
    string Eid;
    double salary;
    
    Employee(string name,string dob,string email,int phone,string gender,string Eid,double salary):Person(name,dob,email,phone,gender){
        this->Eid = Eid;
        this->salary = salary;
    }
    
    void hike(){
        cout<<salary<<endl;
        float hk = 0.15 * salary;
        salary += hk;
        cout<<salary<<endl;
    }
};

int main(){
    Student s1("Kishan","15/06/2006","kishan@gmail.com",6355,"M",24111,85,74,89);
    Employee e1("Kishan","15/06/2006","kishan@gmail.com",6355,"M","352644",25000);
    cout<<s1.avrgggg();
    cout<<endl;
    e1.hike();
    
}
