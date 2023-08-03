// Question: Create a base class called Vehicle with a member function called displayInfo() that prints "This is a vehicle." Create a derived class called Car that inherits from Vehicle. In the main() function, create an object of the Car class and call the displayInfo() function.

#include<iostream>
using namespace std;
         
//base class
class Vehicle {
         public:
         void displayInfo(){
                  cout << "This is a vehicle"<<endl;
         }
};

class Car : public Vehicle {
};

int main() {

         Car c1;
         c1.displayInfo();
         return 0;
}
