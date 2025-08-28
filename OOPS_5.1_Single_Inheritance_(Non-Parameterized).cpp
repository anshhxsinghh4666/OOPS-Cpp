// INHERITANCE : When properties and member functions of base class are passed on to the derived class
//      Used to increase code reusability

/*
        PARENT 
           |
           v
         CHILD
*/

#include <iostream>
#include <string>
using namespace std;

// Parent Class :
class Person {
   public:
    string name;
    int age;

    // Non Parameterized Constructor :
    Person() { cout << "Parent Class Constructor" << endl; }

    ~Person() { cout << "Parent Class Destructor" << endl; }
};

// Child Class (Inheritant) :
class Student : public Person {
   public:
    long rollNo;

    Student() { cout << "Child Class Constructor" << endl; }

    void getInfo() {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Roll No. : " << rollNo << endl;
    }

    ~Student() { cout << "Child Class Destructor" << endl; }

    // NOTE : No need to declare name and age inside student class as it will be inheritated from person class
};

// NOTE : Firstly parent class constructor is called then child class constructor is called.
//        BUT in Destructor Opposite Happens i.e. firstly child class destructor is called then parent class.

int main() {
    Student s1;
    s1.name = "Ansh Singh";
    s1.age = 19;
    s1.rollNo = 2428010128;

    s1.getInfo();

    return 0;
}


// NOTE : Private members inside Parent Class don't get inheritated.