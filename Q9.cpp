#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double imag;

public:
    
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    
    double getReal() const { return real; }
    void setReal(double r) { real = r; }

    
    double getImag() const { return imag; }
    void setImag(double i) { imag = i; }

    
    Complex operator+(const Complex &other) const
    {
        return Complex(real + other.real, imag + other.imag);
    }

    
    Complex operator-(const Complex &other) const
    {
        return Complex(real - other.real, imag - other.imag);
    }

    
    void display() const
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    double r, i;

    cout << "Enter the real part of the first complex number: ";
    cin >> r;
    cout << "Enter the imaginary part of the first complex number: ";
    cin >> i;
    Complex c1(r, i);

    cout << "Enter the real part of the second complex number: ";
    cin >> r;
    cout << "Enter the imaginary part of the second complex number: ";
    cin >> i;
    Complex c2(r, i);

    Complex c3;


    c3 = c1 + c2;
    cout << "c1 + c2 = ";
    c3.display();


    c3 = c1 - c2;
    cout << "c1 - c2 = ";
    c3.display();

    return 0;
}