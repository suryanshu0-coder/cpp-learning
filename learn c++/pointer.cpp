#include<iostream>
using namespace std;

int main() {
         int a=3;
         int *b=&a;// pointer should made tostore address of variable
         cout << b<<endl;// yesleyy hamro a variable ko address print garxa
         cout <<*b<<endl;// yesleyy hamro a variable ko value print garxa
         cout<< &a<<endl;// yesleyy hamro a variable ko address print garxa
         cout<< &b<<endl;// yesleyy hamro a variable ko address print garxa

         //pointer to pointer
         int **c = &b;
         cout << c << endl;// yesleyy hamro a variable ko address print
         cout << *c << endl;// yesleyy hamro a variable ko address print 
         cout << &c << endl;// yesleyy hamro a variable ko address print
         cout << **c << endl;// yesleyy hamro a variable ko value print
         return 0;
}
