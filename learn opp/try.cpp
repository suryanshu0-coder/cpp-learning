#include<iostream>
using namespace std;
int volume(int l,int b ,int h){
         return l*b*h;
}
         float volume(float r , float h1){
         return 3.14*r*r*h1;
}



int main() {

         int l,b,h;
         float r,h1;
         cout<< "enter radius and height"<<endl;
         cin>> r>> h1;
         cout << "Enter value: " << endl;
         cin>> l>> b>> h;
         cout<< "The volume is " << volume(l,b,h)<<endl;
         cout<< "The volume is " << volume(r,h1)<<endl;
         return 0;
}
