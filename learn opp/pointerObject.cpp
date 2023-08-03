#include<iostream>
using namespace std;
class c{
         int a,b;

         public:

         void setData(int a1, int b1){
                  a = a1;
                  b = b1;
         }
         void getData(){
         cout<<"The value of a and b is: "<<a<<" "<<b<<endl;
         }
};
int main() {

         c c1;
          c1.setData(1,4);
          c1.getData();

         c *ptr= &c1;


         (ptr)->setData(1,4);//it is a arrow operator//           
         (ptr)->getData();


         return 0;
// }
