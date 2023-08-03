#include<iostream>

using namespace std;

int main()
{
         int age =22;
         switch (age)
         {
         case /* constant-expression */18:
                  /* code */
                  cout <<"you are 18";
                  break;

                  case 22:
                  cout << "you are 22";
                  break;

                  case 25:
                  cout << "you are 25";
                  break;

         default:
         cout << "you are not born";
                  break;
         }
         return 0;
}