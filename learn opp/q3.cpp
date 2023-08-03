
//add two complex numbers
#include<iostream>
using namespace std;

class Complex {
private:
    int a, b;

public:
    void setNumbers(int real, int imag) {
        a = real;
        b = imag;
    }

    int getRealPart() {
        return a;
    }

    int getImaginaryPart() {
        return b;
    }

    Complex addComplex(Complex c) {
        Complex result;
        result.a = a + c.a;
        result.b = b + c.b;
        return result;
    }
};

int main() {
    int real1, imag1, real2, imag2;
    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> real1 >> imag1;

    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> real2 >> imag2;

    Complex c1, c2, c3;
    c1.setNumbers(real1, imag1);
    c2.setNumbers(real2, imag2);
    c3 = c1.addComplex(c2);

    cout << "The sum is: " << c3.getRealPart() << " + " << c3.getImaginaryPart() << "i" << endl;

    return 0;
}
