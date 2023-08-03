// Question: Create a base class called Animal with a member function called speak(). Create a derived class called Dog that inherits from Animal and overrides the speak() function to print "Woof". In the main function, create an object of the Dog class and call the speak() function.

#include<iostream>
using namespace std;


class Animal{
         public:
         void speak(){
                  cout <<"Animal speaks!" << endl;
         }
};

class Dog : public Animal{
         public:
         void speak(){
         cout<<"Woof!" <<endl;
         }
};
int main() {
         Dog myDog;
         myDog.speak();
         return 0;
}
