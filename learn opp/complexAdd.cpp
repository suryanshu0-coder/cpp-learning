#include<iostream>
using namespace std;
class Complex{
         int real , imaginary;

         public:

           int resultReal;
           int resultImaginary;
         Complex(){}
         Complex(int x, int y){
                  real=x;
                  imaginary = y;
         }

         void input(){
                  cout<< "Enter real and imaginary"<< endl;
                  cin>> real>> imaginary;
         }


         void add(Complex& c1, Complex& c2){
                   resultReal= c1.real + c2.real;
                   resultImaginary= c1.imaginary + c2.imaginary;
                 
         }


         void output(){
                  cout<< "The complex number is: " << resultReal<< " + i " << resultImaginary<< endl;
         }
};
int main() {

         
         Complex c1,c2,c3;

         c1.input();
         c2.input();
         c3.add(c1,c2);
         c3.output();
         return 0;
}
