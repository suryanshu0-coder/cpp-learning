#include<iostream>
using namespace std;
int fibb(int n){
         if((n==0) || (n==1)){
                  return n;
         }
         return fibb(n-1)+ fibb(n-2);
}
int main() {
         int a;
         cout << "Enter the number: "<< endl;
         cin >> a;
         cout<< "The fibb series position for " << a << " is " << fibb(a)<< endl; 
           for (int i = 0; i <= a; i++) {
        cout << fibb(i) << " ";
    } 
         return 0;
}
