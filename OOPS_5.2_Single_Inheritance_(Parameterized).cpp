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

    // Parameterized Constructor :
    Person(string name, int age) {
        cout << "Parent Class Constructor" << endl;
        this->name = name;
        this->age = age;
    }

    ~Person() { cout << "Parent Class Destructor" << endl; }
};

// Child Class (Inheritant) :
class Student : public Person {
   public:
    long rollNo;

    Student(string name, int age, long rollNo) : Person(name, age) {  // To call paremterized constructor
        cout << "Child Class Constructor" << endl;
    }

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
    Student s1("Ansh Singh", 19, 2428010128);

    s1.getInfo();

    return 0;
}
