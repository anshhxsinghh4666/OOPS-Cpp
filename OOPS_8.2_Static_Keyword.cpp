/*
STATIC KEYWORDS : 

Static Objects :  

*/

#include <iostream>
using namespace std;

class ABC {
   public:
    ABC() { cout << "Constructor\n"; }

    ~ABC() { cout << "Destructor\n"; }
};

int main() {
    int n;
    cout << "Enter 1 : Non Static \nEnter 2 : Static \n";
    cin >> n;

    if (n == 1) {
        ABC obj;
    } else if (n == 2) {
        static ABC obj;
    } else {
        cout << "Invalid Value\n";
    }
    cout << "End of main function\n";

    return 0;
}