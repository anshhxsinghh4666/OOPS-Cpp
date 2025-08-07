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


// COPY CONSTRUCTOR : Special Constructor (default) used to cpy properties of one object into another 

#include <iostream>
#include <string>
using namespace std;

// CUSTOM COPY CONSTRUCTOR : 

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

    // Copy Constructor : Custom Copy Constructor 
    teacher(teacher &OriginalObject){  // Pass By Reference 
        cout<<"I am a custom copy constructor : "<<endl;
        this->name = OriginalObject.name;
        this->dept = OriginalObject.dept;
        this->subject = OriginalObject.subject;
        this->salary = OriginalObject.salary;
    }  
    // Member Function : 
    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Subject : "<<subject<<endl;
    }
};

int main(){
    teacher t1("Ansh", "Computer Science", "C++", 100000000);  // Constructor Call

    teacher t2(t1);  // Custom  Copy Constructor Call
    // Copying values of teacher t1 to t2

    cout<<t2.dept<<endl;

    t2.getInfo();

    return 0;
}
