#include <iostream>
using namespace std;
 
// Define a class
class MyClass {
public:
    void myFunction() {
        cout << "Hello from MyClass!" << endl;
    }
};
 
int main() {
    // Create an object of MyClass
    MyClass obj;
 
    // Call the function using the object
    obj.myFunction();
 
    return 0;
}