//readd two complex numbers

#include<iostream>
using namespace std;
class Complex{
         private:
         int a,b;

         public:
         void setNumber(int real ,int imag){
                  a = real;
                  b = imag;
         }

         int getReal(){
                  return a;
         }
         int getImag(){
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
         cout << "Enter first  real and imaginary components; "<<endl;
         cin >> real1 >> imag1;
          cout << "Enter second  real and imaginary components; "<<endl;
         cin >>real2 >> imag2;

         Complex c1 ,c2 , c3;
         c1.setNumber(real1 , imag1);
         c2.setNumber(real2 , imag2);
         c3= c1.addComplex(c2);

         cout<< "The sum is: "<< c3.getReal() << " + " << c3.getImag()<< "i"<<endl;
         return 0;
}
