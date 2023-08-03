#include<iostream>
using namespace std;
class Class1{
         int a;
         int b;

         public:

         // Class1(int i,int j): a(i), b(j){
         //          cout<<"The value of a and b are:  "<< a <<"  and "<< b <<endl;
         // };

         // Class1(int i,int j): a(i), b(j+i){
         //          cout<<"The value of a and b are:  "<< a <<"  and "<< b <<endl;
         // };

         // Class1(int i,int j): a(i), b(j+a){
         //          cout<<"The value of a and b are:  "<< a <<"  and "<< b <<endl;
         // };

         // Class1(int i,int j): a(i+j), b(j){
         //          cout<<"The value of a and b are:  "<< a <<"  and "<< b <<endl;
         // };

         // Class1(int i,int j): b(i), a(j){
         //          cout<<"The value of a and b are:  "<< a <<"  and "<< b <<endl;
         // };

         Class1(int i,int j): a(i+b), b(j){//In this case the the the a will give random value because a will initialixe first as a is declared first.
                  cout<<"The value of a and b are:  "<< a <<"  and "<< b <<endl;
         };



         
};
int main() {

         Class1 class1(4,5);

         return 0;
}
