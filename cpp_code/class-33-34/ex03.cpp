#include <iostream>
#include <cmath>
 
class Circle {
private:
    double radius;
 
public:
    // Parameterized constructor to initialize the radius
    Circle(double r) : radius(r) {}
 
    // Method to calculate the area of the circle
    double calculateArea() {
        return 3.14159265359 * pow(radius, 2);  // Using π (pi) for the calculation
    }
};
 
int main() {
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
 
    // Create a Circle object with the provided radius
    Circle myCircle(radius);
 
    // Calculate and display the area of the circle
    double area = myCircle.calculateArea();
    std::cout << "The area of the circle with radius " << radius << " is: " << area << std::endl;
 
    return 0;
}