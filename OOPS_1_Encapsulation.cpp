// ENCAPSULATION : Wrapping up of data and Member function in a single unit called class.


#include <iostream>
#include <string>
using namespace std;

class teacher{  // Encapsulation

private : // Private Member can only be accessed inside class
    double salary;  // -> Data Hiding  

public : // Public Member can be accessed outside of class.
    // Properties / Attributes :
    string name;
    string dept;
    string subject;

    // Methods / Member Function :
    void changeDept(string newDept){
        dept = newDept;
    }

    // Function To Access Private Member outside of main 
    // Setter : Set Private Value
    void setSalary(double s){
        salary = s;
    }
    // Getter : Get Value of Private Member. 
    double getSalary(){
        return salary;
    }
};

int main(){
    teacher t1; // Constructor Call
    // NOTE : t1, t2 etc are the objects.
    t1.name = "Sabnam";
    t1.subject = "Biology";
    t1.dept = "Bio";
    // t1.salary = 50000;  -> Can't be accessed here as it is a private member.
    
    // Setting Salary using function : 
    t1.setSalary(50000);
    // Getting Value of Salary using function :
    cout<<t1.getSalary()<<endl;
    
    cout<<t1.name<<endl;
}