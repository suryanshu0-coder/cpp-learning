#include<iostream>
using namespace std;

void hello(string name , int n)
{
    int i;
    for(i=1; i<=n; i++)
    {        
    cout << "Hello " << name << endl; 
}

}
int main() {
         int i,n;
         cout << "Enter how many time you want to print the message"<< endl;
         cin>> n;
         string name;
         cout << "enter your name: " << endl;
         cin >> name;
         hello(name,n);
         return 0;
}