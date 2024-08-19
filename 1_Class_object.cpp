#include<iostream> 
#include<string>
using namespace std;

class Teacher{
    //properties

private:             // Private members are only accessible within the class
    double salary;

public:               //Access modifiers (public, private, protected) 
    string name;
    string dept;
    string subject;

    //methods  also knwon as member functions
    void changeDept(string newDept){
        dept = newDept;
    }

    void setSalary(double newSalary){
        salary = newSalary;
    }
    void getSalary(){
        cout<<salary<<endl;
    }
};


int main(){
    Teacher t1;
    t1.name = "Chris";
    t1.dept = "Computer Science";
    t1.subject = "Data Structures";
    t1.setSalary(50000);
    t1.getSalary();

    cout<<t1.name<<endl;

    return 0;
}