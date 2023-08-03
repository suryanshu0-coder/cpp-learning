//Adding two number using friend function]
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

         friend int add(first &f , second &s);
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

         friend int add(first &f , second &s);
};

int add(first &f , second &s){
         return f.a+ s.b;
}
int main() {
         first f(5);
         second s(6);

         int result = add(f,s);

         cout<<"The sum is: "<<result<<endl;
         
         return 0;
}
