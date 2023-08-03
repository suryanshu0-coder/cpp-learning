//Average of two number using friend function]
#include<iostream>
using namespace std;

class second;
class first{
         private:
         int a;

         public:
         first(int a): a(a){}

         void inputData1(){
                  cout<<"Enter a: "<<endl;
                  cin>>a;
         }
         void displayInfo1(){
                  cout<<"The a is: "<<a<<endl;
         }

         friend int avg(first &f , second &s);
};

class second{
         private:
         int b;

         public:
         second(int b): b(b){}

         void inputData1(){
                  cout<<"Enter b: "<<endl;
                  cin>>b;
         }
         void displayInfo1(){
                  cout<<"The b is: "<<b<<endl;
         }

         friend int avg(first &f , second &s);
};

int avg(first &f , second &s){
         return (f.a+ s.b)/2;
}
int main() {
         first f(8);
         second s(6);

         int result = avg(f,s);

         cout<<"The average is: "<<result<<endl;
         
         return 0;
}
