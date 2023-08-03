#include<iostream>
using namespace std;
class Point{
         int x,y;

         public:
         Point(){}

         Point(int x_val , int y_val) : x(x_val), y(y_val){}

         friend ostream& operator << (ostream& o , Point& p){
                  o<< "("<< p.x << ", " << p.y<< ") "<<endl;
                  return o;
         }

         friend istream& operator >>(istream& i ,Point& p){
                  cout<<"Enter the coordinates for point:" <<endl;
                  i>>p.x>>p.y;
                  return i ;
         }
};
int main() {

         Point p(4,6);
         Point p1;

         cout<< p<<endl;

         cin>>p1;
         cout<< p1<< endl;
         return 0;
}
