#include<iostream>
using namespace std;

int main() {

         int marks[4]={1,2,22,45};
         int *p= marks;
         cout << *(p++) << endl;// yo p++ ma value pahila print hunxa ane increament hunxa.
         cout << *(++p)<< endl;// yo p++ ma value pahila  increament hunxa ane print hunxa.
         cout << "The marks is :" << *(p+0) << endl;
         cout << "The marks is :" << *(p+1) << endl;
         cout << "The marks is :" << *(p+2) << endl;
         cout << "The marks is :" << *(p+3) << endl;

         cout << "now address" << endl;
         cout << "The marks is :" << &marks[0] << endl;
         cout << "The marks is :" << &marks[1] << endl;
         cout << "The marks is :" << &marks[2] << endl;
         cout << "The marks is :" << &marks[3] <<&marks[0];

         return 0;
}
