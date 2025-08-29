// ABSTRACTION : Hiding all unnecessary details and showing only the important parts (Using Access Modifiers)
//               Using Abstract class

#include <iostream>
#include <string>
using namespace std;

class Shape {  // Abstract Class: Class with pure virtual function automatically becomes an abstract class
    virtual void draw() = 0;  // Pure Virtual Function
};

class Circle : public Shape {
   public:
    void draw() { cout << "Drawing Circle" << endl; }
};

int main() {
    Circle c1;
    c1.draw();

    return 0;
}