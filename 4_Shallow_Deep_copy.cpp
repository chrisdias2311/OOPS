#include <iostream>
#include <string>
using namespace std;

class Student{
public: 
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;      //cgpaPtr is a new pointer which points to a new memory location float
        *cgpaPtr = cgpa;          //dereferencing cgpaPtr and assigning the value of cgpa to it
    }

    //Shadow copy constructor
    // Student(Student &s){
    //     cout<<"Copy constructor called"<<endl;
    //     this->name = s.name;
    //     this->cgpaPtr = s.cgpaPtr;
    // }

    //Deep copy constructor
    Student(Student &s){
        cout<<"Copy constructor called"<<endl;
        this->name = s.name;
        this->cgpaPtr = new double;
        *cgpaPtr = *(s.cgpaPtr);
    }

    //Destructor
    //Destructor has the same name as that of the Class
    ~Student(){
        cout<<"Hi I delete everything"<<endl;
        delete cgpaPtr;     //memory leak is avoided
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"CGPA: "<<*cgpaPtr<<endl;
    }
};

int main(){
    Student s1("John", 8.4);
    s1.getInfo();

    Student s2(s1);
    *(s2.cgpaPtr) = 9.0;

    s1.getInfo();         // Here the value of the location is changed to 9.0 hence shallow copy creates an issue here as the value of s1 is also changed

    return 0;
}