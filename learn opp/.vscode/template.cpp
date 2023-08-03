#include<iostream>
using namespace std;
template <class t , class t1>

class sample{
         private:
         t x;
         t1 y;

         public:
         void set(t a , t1 b){
                  x=a;
                  y=b;
         }

         void input(){
                  cout<<"Enter x and y : "<<endl;
                  cin>>x>>y;
         }

         void display(){
                  cout<<"The value of x and y : "<<x<<"\n"<<y<<endl;
         }
};
int main() {

         sample<int , float>s;

         s.set(5,5.08);
         s.input();
         s.display();

         return 0;
}
