#include <iostream>
using namespace std;

class Base1
{
         int data1;

public:
         Base1(){
                  data1=0;
         }
         Base1(int d1)
         {
                  data1 = d1;
                  cout << "constructor of Base1 called" << endl;
         }

         void printDataBase1()
         {
                  cout << "The value of data1 is: " << data1 << endl;
         }
};

class Base2
{
         int data2;

public:
         Base2(){
                  data2=0;
         }
         Base2(int d2)
         {
                  data2 = d2;
                  cout << "constructor of Base2 called" << endl;
         }

         void printDataBase2()
         {
                  cout << "The value of data2 is: " << data2 << endl;
         }
};

class Base3
{
         int data3;

public:
         Base3(){
                  data3=0;
         }
         Base3(int d3)
         {
                  data3 = d3;
                  cout << "constructor of Base3 called" << endl;
         }

         void printDataBase3()
         {
                  cout << "The value of data3 is: " << data3 << endl;
         }
};

class Derived : public Base1, public Base2, public Base3
{
         int data4, data5;

public:
         Derived(){
                  data4=0;
                  data5=0;
         }
         Derived(int d1, int d2, int d3, int d4, int d5) : Base1(d1), Base2(d2), Base3(d3)
         {
                  data4 = d4;
                  data5 = d5;
                  cout << "constructor of Derived called" << endl;
         }
         void printDataDerived()
         {
                  cout << "The value of data4 is: " << data4 << endl;
                  cout << "The value of data5 is: " << data5 << endl;
         }
};
int main()
{
         Derived d(1, 2, 3, 4, 5);

         d.printDataBase1();
         d.printDataBase2();
         d.printDataBase3();
         d.printDataDerived();

         cout<< endl;
         cout<< endl;
         cout<< endl;

         Derived dd;//The default constructor is created in each class just to call dd object which have no any arguments and if there no any arguments are passed then it is compulsory to create a default constructor.
         //Otherwise in this case it is not required to create a default constructor.
         return 0;
}
