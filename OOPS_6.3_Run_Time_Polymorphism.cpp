// RUN TIME POLYMORPHISM :

#include <iostream>
#include <string>
using namespace std;

// Function Overriding : 

class Parent {
   public:
    void getInfo() { cout << "Parent Class" << endl; }
};

class Child : public Parent {
   public:
    void getInfo() { cout << "Child Class" << endl; }
};

int main() {
    Parent p1;
    p1.getInfo();

    Child c1;
    c1.getInfo();

    // When we call the parent call or the child class it override the other class function and call its class
    // i.ee on calling child class only child class function is called not the parent class.


    return 0;
}