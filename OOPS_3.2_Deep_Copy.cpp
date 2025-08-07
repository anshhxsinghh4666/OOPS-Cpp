/*
DEEP COPY : A deep copy not only copies the member values but also makes copies of any dynamically allocated memory 
            that the members points to.
            Deep copy is done in dynamic memory allocation.
            
Check notes for more.
*/

#include <iostream>
#include <string>
using namespace std;

class Student{
public :
    string name;
    double* cgpaPtr;

    Student(string name , double cgpa){
        this->name = name;
        cgpaPtr = new double;  // Allocating new memory to cgpa (Dynamic memory allocation)
        *cgpaPtr = cgpa;
    }


    // Deep Copy Constructor : 
    Student(Student &obj){
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"CGPA : "<<*cgpaPtr<<endl;
    }
};

int main(){
    Student s1("Ansh", 8.78);
    Student s2(s1);  // Rahul
    
    s1.getInfo(); 
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();

    s2.name = "Rahul";
    s2.getInfo(); // So the change in cgpa of s2 will also change the value of cgpa in s1.

    return 0;
}