/*
SHALLOW COPY :  A shallow copy of an object copies all of the member values 
                from one object to another.
                Shallow copy is done in static memory allocation.
                    
NOTE : Shallow copies creates problem in dynamic memory allocation

Check Notes for more.
*/

#include <iostream>
#include <string>
using namespace std;

class Student{ 
public : 
    string name;
    double cgpa;
    Student(string name , double cgpa){
        this->name = name;
        this->cgpa = cgpa;
    }
    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"CGPA : "<<cgpa<<endl;
    }
};

int main() {
    Student s1("Ansh" , 8.78);
    Student s2(s1);
    s2.getInfo();

    return 0;
}