#include<iostream>
using namespace std;

int main() {

         int marks[5];
         cout << "Enter the numbers: " <<endl;
         for(int i = 0; i < 5; i++){ // take input marks
                  cin >> marks[i];
         }       
         cout << "The numbers are: " << endl;
         for(int i = 0; i < 5; i++){// print the number
                  cout << marks[i] << endl;
         }
         return 0;
}

