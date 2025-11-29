/*
STATIC KEYWORD :

1. Static Variables : 
        Variables declared as static in a function are created and 
        initialised once for the lifetime of the program.  -> In Function
        
        Static Variables in a class are created and initialised once. They are shared by
        all the objects of the class.  -> In Class

*/

#include <iostream>
using namespace std;

void fun() {
    int x = 0;  // Initial Statement
    cout << "Non - Static x : " << x << endl;
    x++;
}

void statFun() {
    static int x = 0;  // Initial Statement
    cout << "Static x : " << x << endl;
    x++;
}

int main() {
    // Non-Static x :
    fun();
    fun();
    fun();

    // Static x :
    statFun();
    statFun();
    statFun();

    return 0;
}
