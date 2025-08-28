// RUN TIME POLYMORPHISM :

#include <iostream>
#include <string>
using namespace std;

// Virtual Function :

class Parent {
   public:
    void getInfo() { cout << "Parent Class" << endl; }

    virtual void hello() { cout << "Hello from Parent \n"; }
};

class Child : public Parent {
   public:
    void getInfo() { cout << "Child Class" << endl; }

    void hello() { cout << "Hello from Child \n"; }
};

int main() {
    Parent p1;
    p1.getInfo();

    Child c1;
    c1.getInfo();
    c1.hello();

    return 0;
}
