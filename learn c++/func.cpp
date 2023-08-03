#include<iostream>
using namespace std;
int c;
inline int pro(int a,int b){
         c =a*b;
         return 0;
}
int main(){

         int a,b;
         cin>> a>>b;
         pro(a,b);//call
         cout<< c;//print
         return 0;
}
