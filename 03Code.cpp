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
    
    // Destructor
    ~Student(){
        cout<<"Hi I delete everything including dynamically allocated ones\n";
        delete cgpaPtr; // saves from memory leak at organizational level
        
    }

    void getInfo(){
        cout<<"Name : "<<name<<endl<<"cgpa : "<<*cgpaPtr<<endl;
    }
};

int main(){
    Student s1("Kishan",9.06);
    s1.getInfo();
    return 0;
} 