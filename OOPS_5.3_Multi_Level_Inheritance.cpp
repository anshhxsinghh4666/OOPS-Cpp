// Multi-Level Inheritance :

/*
        PARENT 
           |
           v
        PARENT
           |
           v
         CHILD
*/

#include <iostream>
#include <string>
using namespace std;

class Person {
   public:
    string name;
    int age;
};

class Student : public Person {
   public:
    long rollNo;
};

class GradStudent : public Student {
   public:
    string researchArea;

    void getInfo() {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Roll No. : " << rollNo << endl;
        cout << "Research Area : " << researchArea << endl;
    }
};

int main() {
    GradStudent s1;
    s1.name = "Ansh Singh";
    s1.age = 19;
    s1.rollNo = 2428010128;
    s1.researchArea = "Computer Science";

    s1.getInfo();

    return 0;
}