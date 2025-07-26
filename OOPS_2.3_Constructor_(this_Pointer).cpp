/*
this POINTER : this is a special pointer in C++ that points to the current object

Syntax : 
        this->Property 
        OR 
        *(this).Property 
*/


#include <iostream>
#include <string>
using namespace std;

class teacher{
public :
    string name;
    string dept;
    string subject;

    teacher(string name, string dept, string subject){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
    }

    // Member Function : 
    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Subject : "<<subject<<endl;
    }
};

int main(){
    teacher t1("Ansh", "Computer Science", "C++");  // Constructor Call

    cout<<t1.dept<<endl;

    t1.getInfo();

    return 0;
} 