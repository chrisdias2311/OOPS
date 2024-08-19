#include<iostream> 
#include<string>
using namespace std;

class Parent{
public:
    void getInfo(){
        cout<<"parent class"<<endl;
    }

    void virtual hello(){
        cout<<"Hello from parent"<<endl;
    }
};

class Child : public Parent{
public:
    void getInfo(){
        cout<<"child class"<<endl;
    }

    void hello(){      //Since the function is virtual in the parent class, it is mandatory to override the function in the child class  
        cout<<"Hello from child"<<endl;
    }
};

int main(){
    Child c1;
    c1.getInfo(); //child class

    return 0;
} 


