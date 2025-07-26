/*
CONSTRUCTOR : Special method invoked automatically at time of object creation if not 
                created seperately. Used for initialistion
                
    Properties : 
    -> Same name as class 
    -> Constructor doesn't have a return type 
    -> Only called once (automatically), at object creation
    -> Memory allocation happens when constructor is called 

NOTE : Constructors are always Public because it is called from the main function and 
       since main function don't have private members access , so it won't get called.
*/ 



#include <iostream>
#include <string>
using namespace std;

// PARAMETERIZED CONSTRUCTOR : Parameters inside constructor 

class teacher{
public :
    // Properties / Attributes :
    string name;
    string dept;
    string subject;
    string salary; 

    // Constructor Function :
    teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    // Member Function : 
    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Subject : "<<subject<<endl;
    }
};

int main(){
    teacher t1("Ansh", "Computer Science", "C++", 100000000);  // Constructor Call

    cout<<t1.dept<<endl;

    t1.getInfo();


    return 0;
}
