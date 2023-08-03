#include<iostream>

using namespace std;

int main(){
         int age;
         cout << "Tell me your age" << endl;
         cin >> age;
         if(age >= 18){
                  cout << "You are eligible to recieve liscense" << endl;
         }
         else{
                  cout << "You are not eligible to recieve liscense" << endl;
         }
         return 0;
}