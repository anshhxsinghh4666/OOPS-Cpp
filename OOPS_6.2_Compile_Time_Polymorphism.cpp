// COMPILE TIME POLYMORPHISM :
//      -> Constructor Overloading (Done in OOPS_6.1_Polymorphism.cpp)
//      -> Function Overloading

#include <iostream>
#include <string>
using namespace std;

class Print {
   public:

   // Function Overloading : 
    void show(int x) { cout << "int : " << x << endl; }

    void show(char ch) { cout << "Char : " << ch << endl; }
};

int main() {
    Print p1;
    p1.show('&');

    p1.show(5);
    return 0;
}