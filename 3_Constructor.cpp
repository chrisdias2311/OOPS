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

    // Non parameterized constructor
    Teacher(){ //Constructor
        cout<<"Teacher Object created"<<endl;      // We already set the default valwue of dept in Teacher 
        dept = "Computer Science";
    }

    //Parameterized constructor
    // Teacher(string n, string d, string s, double sal){
    //     name = n;
    //     dept = d;
    //     subject = s;
    //     salary = sal;
    // }
    Teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    //Copy constructor
    Teacher(Teacher &t){        //pass by reference 
        cout<<"Custom Copy constructor called"<<endl;
        this->name = t.name;
        this->dept = t.dept;
        this->subject = t.subject;
        this->salary = t.salary;
    }

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

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};


int main(){
    Teacher t1("Chris", "Computer Science", "Data Structures", 50000);
    t1.getInfo();

    Teacher t2(t1);        //By default creates a copy constructor
    t2.getInfo();

    return 0;
}