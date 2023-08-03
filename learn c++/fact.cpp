#include<iostream>
using namespace std;

int fact(int n){
         if(n<2){
                  return 1;
         }
         else{
                  return n * fact(n-1);
         }
}
int main() {

         int a;
         cout<< "Enter a nunnber: " <<endl;
         cin >> a;
         cout << "the factorial of "<< a << "is "<< fact(a) << endl;
         return 0;
}
