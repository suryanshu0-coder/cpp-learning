#include<iostream>
using namespace std;
class Rectangle{
         private:
         int length, breadth;

         public:

         Rectangle(int l, int b) : length(l), breadth(b){}
         friend int  calculateArea(Rectangle &r);
};

 int calculateArea(Rectangle &r){
         return r.length*r.breadth;
}
int main() {

         int l,b;
         cout<<"Enter length and breadth"<<endl;
         cin>>l>>b;

         
         Rectangle r(l,b);
         //calling the function to get area of rectangle
         int a=calculateArea(r);
         cout<<a<<endl;
         return 0;
}
