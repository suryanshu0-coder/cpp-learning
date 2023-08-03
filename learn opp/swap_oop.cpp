#include<iostream>
using namespace std;
class b;

class a{
         private:
         int x;

         public:
         void setNumber(int r){
                  x=r;
         }

         int getNumber(){
                  cout<< x<<endl;
                  return x;
         }
         friend void swap(a& , b&);
};

class b{
         private:
         int y;

         public:
         void setNumber(int s){
                  y=s;
         }

         int getNumber(){
                  cout<< y<<endl;
                  return y;
         }
            friend void swap(a& , b&);
};

void swap(a &ox, b &oy){
   // like this we can pass the object of a class by reference.
         int temp= ox.x;
         ox.x=oy.y;
         oy.y=temp;
}
int main() {

         a oa1;
         b ob2;

         oa1.setNumber(36);
         ob2.setNumber(63);

         swap(oa1,ob2);

         cout<< "The value after swapping is: "<< endl;
         oa1.getNumber();
         ob2.getNumber();

         return 0;
}
