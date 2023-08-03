#include<iostream>
using namespace std;

int main() {

         int marks[5];
         int sum=0,avg=0;
         cout << "Enter marks" << endl;
         for (int i = 0; i < 5; i++){
                  cin >> marks[i];
                  sum=sum + marks[i];
         }
         avg=sum/5;
         cout<< "The printed marks are : " << endl;
         for (int i = 0; i <5; i++)
         {
                  cout << marks[i] << endl;
         }

         cout<< "The sum is : " << sum << endl;
         cout << "The average is : " << avg << endl;
         
         return 0;
}
