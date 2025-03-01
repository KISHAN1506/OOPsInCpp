#include <iostream>
using namespace std;

void fun(){
    // initial statement runs only 1 time then upon calls done next time it does not execute
    static int x = 0;
    cout<<"x: "<<x<<endl;
    x++;
};

class ABC {
    public:
    ABC(){
        cout<<"Constructor"<<endl;
    }
    ~ABC(){
        cout<<"Dectructor"<<endl;
    }
};

int main(){
    if(true){
        static ABC a1;
    }
    cout<<"Prog end\n";
    return 0;
}