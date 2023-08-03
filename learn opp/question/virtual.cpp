#include<iostream>
using namespace std;

class Base{
         private:
         int data;

         public:
         Base(){}
         Base(int d): data(d) {}
         virtual void print(){
                  cout<<"The value of data: "<<data<< endl;
         }
};

class Derived1 : public Base{
         private:
         int data1;

         public:
         Derived1(){}
         Derived1(int d1): data1(d1) {}
         void print(){
                  cout<<"The value of data1: "<<data1<< endl;
         }
};

class Derived2 :public Base{
         private:
         int data2;

         public:
         Derived2(){}
         Derived2(int d2): data2(d2) {}
         void print(){
                  cout<<"The value of data2: "<<data2<< endl;
         }
};

int main(){
         Base b(5);
         b.print();
         Derived1 d1(55);
         d1.print();
         Derived2 d2(45);
         d2.print(); 
         return 0;
}