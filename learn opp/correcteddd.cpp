#include<iostream>
using namespace std;
class position{
         private:
         int x,y;

         public:
         position();
         position(int x1, int y1)
         {
            x=x1;
            y=y1;
         }
                 



position add(position p1,position p2)
{
         
         return position (p1.x+p2.x ,p1.y+p2.y );
} 

void display(){
         cout<<"The sum is: "<<x<<" "<<y;
}
};
int main() {

        position p1(4,5), p2(5,7);
        position c3;
        c3.add(p1,p2);
        c3.display();
         return 0;
}