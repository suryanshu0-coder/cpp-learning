#include<iostream>
using namespace std;
class position{
         private:
         int x1,y1,x2,y2;

         public:
         position(int x1, int y1,int x2, int y2){
                  this->x1=x1;
                  this->x2=x2;
                  this->y1=y1;
                  this->y2=y2;
         }

void readData(){
         cout<<"The x coordinate:"<<endl;
         cin>>x1>>x2;

         cout<<"The y coordinate: "<<endl;
         cin>>y1>>y2;
}

position add(position p){
         position sumX = p.x1+p.x2;
         position sumY = p.y1 + p.y2;
         return position(sumX,sumY);
} 

void display(){
         cout<<"The sum is: "<<sumX<<" "<<sumY
}
};
int main() {

         position p1(4,5,6,7);
         p1.readData();
         position;
        position p2= p1.add(p2);
        p2.displat();
         return 0;
}
