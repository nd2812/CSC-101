#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0, double i = 0) : real(r), imaginary(i) {}

    Complex operator*(const Complex& other) {
        // (a + bi) * (c + di) = (ac - bd) + (ad + bc)i
        double resultReal = (real * other.real) - (imaginary * other.imaginary);
        double resultImaginary = (real * other.imaginary) + (imaginary * other.real);
        return Complex(resultReal, resultImaginary);
    }

    void display() {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    Complex num1(2, 3);
    Complex num2(1, 2);

    Complex result = num1 * num2;

    std::cout << "Result of multiplication: ";
    result.display();

    return 0;
}
