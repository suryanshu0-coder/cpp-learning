#include<iostream>
using namespace std;
class Complex{
         private:
         int real;
         int imag;

         public:
         Complex(int r, int i) : real(r), imag(i){}

         Complex operator +(Complex other){
                  return Complex(real + other.real, imag + other.imag);
         }

         void display(){
                  cout<<"The sum is : "<<real << " + "<<imag<<" i"<<endl;
         }
         
};   
int main() {
         Complex c1(4,5);
         Complex c2(6,8);

         Complex c3 = c1 + c2;
   
         c3.display();          
         return 0;
}
