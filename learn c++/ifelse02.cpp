#include<iostream>

using namespace std;

int main(){
         int age;
         cout <<"what is your agr ?" << endl;
         cin >> age;
         if((age >=1) && (age <=18)){
                  cout << "you are child" << endl;
         }
         else if ((age >18)&& (age <=65)){
                  cout << "you are adult " << endl;
         }
         else{
                  cout << "you are old"<< endl;
         }
         return 0;
}