#include<iostream>
using namespace std;

int sum (int a, int b);
int main(){

         int x,y;
         cout <<"Enter the number a and b: " <<endl;
         cin >> x >> y;
         cout << "The sum number is: " << sum(x,y) <<endl;
         //x and y are actual parameters
         return 0;
}

int sum (int a, int b){
         //a and b are formal parameters which take value from actual parameters.
         return a+b;
}