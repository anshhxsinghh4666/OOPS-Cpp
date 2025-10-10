// POLYMORPHISM : The ability of an object to take on different forms or behave in different
// ways depending on the context in which they are used.

#include <iostream>
#include <string>
using namespace std;

class Student {
   public:
    string name;

    // Constructor Overloading :
    Student() { cout << "Non Parameterized Constructor \n"; }

    Student(string name) {
        this->name = name;
        cout << "Parameterized \n";
    }
};

int main() {
    Student s1("Ansh Singh");  // -> Call Parameterized Constructor

    Student s2;
    s2.name = "Ansh Singh";  // -> Call Non Parameterized Constructor

    // This is called Constructor Overloading. It is an example of Compile time Polymorphism. This shows how object accordingly decides which constructor to call.

    return 0;
}