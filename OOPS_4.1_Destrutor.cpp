/* DESTRUCTOR : Automatically Deletes/deallocates statically allocated memory of the objects.
                Dynamically allocated memeory have to be deallocated dynamically.
*/

// NOTE : Destructor and Constructor automatically calls itself.

#include <iostream>
#include <string>
using namespace std;

class Student {
   public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa) {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // Destructor :
    ~Student() {
        cout << "Hi , I delete everything";
        // NOTE : Destructor automatically frees statistically allocated memory.
        // Dynamically allocated memory have to be seperately freed.
        delete cgpaPtr;
    }

    /*NOTE : When the code completed memeory is deleted but it is important to seperately delete the dynamically allocated memory
            otherwise it will lead to memory leaks

            Memory Leak : When we don't free the dynamically allocated memory using delete then the data is stored in the heap 
            and no pointer is pointing that data and the data is not used in other programs , so it leads to wastage of memeory called memory leak.
    */

    void getInfo() {
        cout << "Name : " << name << endl;
        cout << "CGPA : " << *cgpaPtr << endl;
    }
};

int main() {
    Student s1("Ansh", 9.5);
    s1.getInfo();
    return 0;
}