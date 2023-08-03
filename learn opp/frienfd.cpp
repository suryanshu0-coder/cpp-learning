#include<iostream>
using namespace std;
class Computer{
         private:
         string brand;
         int ram;
         int ssd;

         public:
         Computer(){}
         Computer(string b,int r,int s){
                  this->brand=b;
                  this->ram=r;
                  this->ssd=s;
         }

         string getBrand(){
                  return brand;
         }
};
int main() {

         
         return 0;
}
