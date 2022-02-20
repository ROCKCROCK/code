#include <iostream>
#include <cmath>

using namespace std;

class Complex 
{
    private:
        double real;
        double imaginary;
    public:
        Complex(double real=0, double imaginary=0);
        ~Complex();

        double getReal() const;
        double getImaginary() const;
};

std::ostream& operator<<(std::ostream& out, const Complex& complex);

Complex::Complex(double real, double imaginary) 
{
    this->real = real;
    this->imaginary = imaginary;
}

Complex::~Complex() 
{
    
}

double Complex::getReal() const 
{
    return this->real;
}

double Complex::getImaginary() const 
{
    return this->imaginary;
}

std::ostream& operator<<(std::ostream& out, const Complex& other) 
{
    return out << other.getReal() << "+" << other.getImaginary() << "i";
}

int main() 
{
    Complex z1(5, 6);
    Complex z2(3, 2);

    cout << "Complex number z1 is: " << z1 << "\n";
    cout << "Complex number z2 is: " << z2 << "\n";

    return 0;
}
