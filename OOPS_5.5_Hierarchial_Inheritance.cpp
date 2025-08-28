// HIERARCHIAL INHERITANCE :

/*
            PARENT 
              /\
             /  \
            /    \
        CHILD   CHILD 
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

class Teacher : public Person {
   public:
    string subject;
    double salary;
};

int main() {
    Student s1;
    s1.name = "Ansh Singh";
    s1.age = 19;
    s1.rollNo = 2428010128;

    Teacher t1;
    t1.name = "Ansh Singh";
    t1.age = 19;
    t1.salary = 9383939;
    t1.subject = "C++";

    return 0;
}
