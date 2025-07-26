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

// NON PARAMETERIZED CONSTRUCTOR : No parameter inside parenthesis
class teacher{ 
public : 
    // Properties / Attributes :
    string name;
    string dept;
    string subject;

    // Constructor Function : 
    teacher(){  
        cout<<"Hi , I am Constructor \n";

        // Initialisation : Will automatically assign dept to all objects created , so no need to assign seperately.
        dept = "Computer Science";
    }

// NOTE : If you don't create a constructor , then compiler will by default make it for you. 

};

int main(){
    teacher t1; // Constructor Call -> This will take you to the constructor function in class and execute the commands inside
    teacher t2; // Now 2 times the constructor will be called 
    t1.name = "Sabnam";
    t1.subject = "OOPS";
    // t1.dept = "Computer Science"; -> No Need to write this as dept is alloted in constructor
    
    cout<<t1.name<<endl;

    cout<<t1.dept<<endl;
}