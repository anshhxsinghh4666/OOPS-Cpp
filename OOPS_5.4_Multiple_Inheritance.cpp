// MULTIPLE INHERITANCE :

/*
        PARENT      PARENT
           \          /
            \        /
             \      /
               CHILD
*/

#include <iostream>
#include <string>
using namespace std;

class Student {
   public:
    string name;
    long rollNo;
};

class Teacher {
   public:
    string subject;
    double salary;
};

class TA : public Student, public Teacher {
   public:
    void getInfo() {
        cout << "Name : " << name << endl;
        cout << "Roll No. : " << rollNo << endl;
        cout << "Salary : " << salary << endl;
        cout << "Subject : " << subject << endl;
    }
};

int main() {
    TA s1;
    s1.name = "Ansh Singh";
    s1.rollNo = 2428010128;
    s1.salary = 9383939;
    s1.subject = "C++";

    s1.getInfo();

    return 0;
}