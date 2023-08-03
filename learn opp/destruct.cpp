#include<iostream>
using namespace std;
class Demo{
         private:
         int a,b;

         public:
         Demo(int x, int y){
                  a=x;
                  b=y;
         }

         void display(){
                  cout<<"a = "<<a<<endl;
                  cout<<"b = "<<b<<endl;
         }

         ~Demo(){
                  cout<<"The destructor is called"<<endl;
         }
};
int main() {
         Demo d(10,20);
         d.display();
         
         return 0;
}
