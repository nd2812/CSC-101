#include <iostream>
using namespace std;
 
class Complex {
private:
    double real;
    double imaginary;
 
public:
    // Constructor to initialize a complex number
    Complex(double r, double i) {
        real = r;
        imaginary = i;
    }
 
    // Method to add two complex numbers
    Complex add(Complex& other) {
        double sumReal = real + other.real;
        double sumImaginary = imaginary + other.imaginary;
        return Complex(sumReal, sumImaginary);
    }
 
    // Method to display the complex number
    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};
 
int main() {
    double userReal, userImaginary;
 
    cout << "Enter a complex number (real part): ";
    cin >> userReal;
    cout << "Enter the imaginary part: ";
    cin >> userImaginary;
 
    // Create a complex number using the user's input
    Complex userComplex(userReal, userImaginary);
 
    // Create another complex number using the constructor
    Complex constructorComplex(3.5, 2.0); // Example values
 
    // Add the two complex numbers
    Complex result = userComplex.add(constructorComplex);
 
    cout << "User's Complex Number: ";
    userComplex.display();
 
    cout << "Complex Number from Constructor: ";
    constructorComplex.display();
 
    cout << "Sum of Complex Numbers: ";
    result.display();
 
    return 0;
}