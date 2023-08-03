#include<iostream>
using namespace std;
class number {
         private:
         int a, b;

         public:

         number(){ 
                  a = 0;
                  b =0;
         }
         void setNum(){
                 
                  cout<<"Enter numbers: "<<endl;
                  cin>>a>>b;
         }
         
         
         number(int x, int y){
                  a = x;
                  b = y;
         }


         void  getNum(){
                  cout<< "The number is "<<a <<" and "<<b<<endl;
         }

        int addNumber(){  
                  return a+b;
}

};
int main() {
         int x,y;
         number n1;
         n1.setNum();
         number n2(x,y);
         int result=n1.addNumber();

         cout<< "The sum is: " << result << endl;

         return 0;
}
