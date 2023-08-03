#include<iostream>
using namespace std;
class second;
class first {
         private:
         int f;

         public:
         void setNumber(int a){
                  f=a;
         } 

         int getNumber(){
                  cout<< f<<endl;
                  return f;
         }
         friend int add(first& oa, second& ob);
};

class second {
         private:
         int s;

         public:
         void setNumber(int b){
                  s=b;
         }

         int getNumber(){
                  cout<< s<<endl;
                  return s;
         }
          friend int add(first& oa, second& ob);
};

int add(first& oa, second& ob){
         
         return oa.getNumber() + ob.getNumber(); 
}


int main() {
         first of;
         second os;

         of.setNumber(5);
         os.setNumber(11);

        int sum= add(of , os);

         cout<< "The sum is: "<< sum  << endl;
         of.getNumber();
         os.getNumber();
         
         return 0;
}
