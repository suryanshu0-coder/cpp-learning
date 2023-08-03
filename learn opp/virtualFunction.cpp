#include<iostream>
#include<string>
using namespace std;
class Base{
         protected:
         int a1;
         string a2;

         public:
         Base(int a1, string a2){
                  this->a1 = a1;
                  this->a2 = a2;
         }

          virtual void display(){
                   cout<< "The value of a1 is "<< a1<<endl<< "  and the value of a2 is "<< a2<<endl;
         }
};

class Derived1 : public Base{
         protected:
         int b1;
         int b2;

         public:
         Derived1(int a1, string a2,int b1, int b2) : Base(a1,a2){
                  this->b1 = b1;
                  this->b2 = b2;
         }

          void display(){
                  cout<< "The value of b1 is "<< b1<<endl<< "  and the value of b2 is "<< b2<<endl;
          }
};

class Derived2 : public Base{
         protected:
         int c1;
         float c2;

         public:
         Derived2(int a1,string a2, int c1, float c2) : Base(a1,a2){
                  this->c1 = c1;
                  this->c2 = c2;
         }

         void display(){
                  cout<< "The value of c1 is "<< c1<<endl<< "  and the value of c2 is "<< c2<<endl;
         }  
};
int main() {
         Base Base_object(1,"ok");
         Derived1 Derived1_object(1,"ok",6,5);
         Derived2 Derived2_object(1,"ok",2,3.5);

         Base* Base_pointer[2];
         Base_pointer[0]= &Derived1_object;
         Base_pointer[1]= &Derived2_object;

         Base_pointer[0]->display();
         Base_pointer[1]->display();
         return 0;
}

/*
In this code as we can see that there is one base class and two derived class.
In the base class the display() function is made virtual because if the function in base class is not made virtual, the pointer of base class pointing the object of derived class will not be invoked (instead of that display() function of base class will be invoked). And to invoke the display() function of derived class the base class display() function is made virtual.

And in main method  an object of both derived classes and base class is created and initialized with the constructor then the poiter array of base class is created with size two  whose index 0 and 1 respectively points the object of derived class 1 and 2 respectively.
Then finally the arrow operator is used to invoke the display() function of derived classes.
*/

/*
A virtual function in C++ is a function that is declared in a base class and is intended to be overridden (redefined) in the derived classes. It allows the derived classes to provide their own implementation of the function, which is determined dynamically at runtime based on the actual object type.

In short, a virtual function enables polymorphic behavior, allowing different derived classes to have their own versions of the function, while still being accessed through a common base class interface.
*/
/*
Rules of virtual function:
1.They cannot be static.
2.They are accessed by object pointers.
3. Virtual function can be friend of other class.
4.A virtual function in base class might not be used.
5.If a virtual function is defined in base class, there is no necessarily of redefining it to derived class.
*/

