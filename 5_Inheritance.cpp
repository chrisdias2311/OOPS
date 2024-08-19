#include<iostream>
using namespace std;


// Single inheritance
// class A{
//     public:
//     void func(){
//         cout<<"Inherited";
//     }
// };
// class B : public A {
// };// Class B will inherit all the *public & protected* attributes of class A 

// void main(){
//     B b;
//     b.func();
// }









//Multiple inheritance 
// class A{
//     public:
//     void Afunc(){
//         cout<<"Func A \n";
//     }
// };
// class B{
//     public:
//     void Bfunc(){
//         cout<<"Func B \n";
//     }
// };

// class C : public A, public B {
//     public:
// };

// void main(){
//     C c;
//     c.Afunc();
//     c.Bfunc();
// }









//MultiLevel inheritance 
class A{
    public:
    void Afunc(){
        cout<<"Function A \n";
    }
};
class B: public A{
    public:
    void Bfunc(){
        cout<<"function B \n";
    }
};
class C : public B{
    public:
};

int main(){
    C c;
    c.Afunc();
    c.Bfunc();
}









class Ground{
    int Rooms;
    
    protected:
    void put();

    public:
    void get();
};
class Middle : private Ground {
    int Labs;
    //void put();     Inherited from class Ground
    //void get();     Inherited from class Ground

    public:
    void Take();
    void Give();
};  //class Middle will inherit the public and protected attributes of class Ground in its private component
class Top: public Middle {
    int Roof;

    public:
    // void Take();    Inherited from public of class Middle
    // void Give();    Inherited from public of class Middle
    void In();
    void Out();
};//class Top will inherit the public and protected attributes of class Middle in its public component



//Q. What type of inheritance is this?
//=>Multilevel Inheritance 

//Q. Write the names of all the members, which are directly accesible by the member function Give() of class Middle
//=>Data members: Labs     Member functions: Put(), Get(, Take(), Give();

//Q. Write the names of all the members, which are directly accesible by the member function Out() of class Top
//=>Data members: Roof     Member functions: Take(), Give(), In(), Out();

//Q. Write the names of all the members, which are directly accessible by the object T of class Top declared in main() function.
//=> Member functions: Take(), Give(), In(), Out();