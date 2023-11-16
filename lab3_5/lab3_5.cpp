#include <iostream>

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    
    ComplexNumber(double real, double imaginary) : real(real), imaginary(imaginary) {}

    
    ComplexNumber add(const ComplexNumber& other) const {
        return ComplexNumber(real + other.real, imaginary + other.imaginary);
    }

    
    ComplexNumber multiply(const ComplexNumber& other) const {
        double resultReal = (real * other.real) - (imaginary * other.imaginary);
        double resultImaginary = (real * other.imaginary) + (imaginary * other.real);
        return ComplexNumber(resultReal, resultImaginary);
    }

    
    void display() const {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    
    ComplexNumber complex1(3.0, 4.0);  
    ComplexNumber complex2(1.5, 2.5);  

    
    ComplexNumber sum = complex1.add(complex2);
    std::cout << "Sum: ";
    sum.display();

    
    ComplexNumber product = complex1.multiply(complex2);
    std::cout << "Product: ";
    product.display();

    return 0;
}
