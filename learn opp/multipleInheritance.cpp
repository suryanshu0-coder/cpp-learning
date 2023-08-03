#include<iostream>
using namespace std;
class Base1{
         protected:
         int int1;

         public:
         void setNum1(int n){
                  int1 = n;
         }

         void getNum1(){
                  cout<< "The value of number is: "<<int1<<endl;
         }
};

class Base2{
         protected:
         int int2;

         public:
         void setNum2(int n){
                  int2 = n;
         }

         void getNum2(){
                  cout<< "The value of number is: "<<int2<<endl;
         }
};

class Base3{
         protected:
         int int3;

         public:
         void setNum3(int n){
                  int3 = n;
         }

         void getNum3(){
                  cout<< "The value of number is: "<<int3<<endl;
         }
};

class Derived : public Base1 ,public Base2 , public Base3{
         public:

         void display(){
                  getNum1();
                  getNum2();
                  getNum3(); 
         }
};
int main() {
         Derived  d1;

         d1.setNum1(1);
         d1.setNum2(4);
         d1.setNum3(6);

         d1.display();
         return 0;
}
