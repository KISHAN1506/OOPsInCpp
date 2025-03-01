#include <iostream>
using namespace std;

/*
Operator Overloading

int y = 10;
int x = y;  // x = 10

string b = "abc";
string a = b;  // "abc"

*/



class Print{
public:

    // this is compile time polymorphism
    void show(int x){
        cout<<"Int: "<<x<<endl;
    }
    void show(char ch){
        cout<<"Char: "<<ch<<endl;
    }
};

int main(){
    Print p1;
    p1.show(2);
    p1.show('a');
    return 0;
}