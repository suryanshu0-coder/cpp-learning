#include <iostream>
#include<string>
using namespace std;

class Rectangle {
         private:
        int l,b;

         public:
         void setArea(int x,int y) { 
                  l = x;
                  b=y;
         }
         int getArea() {
                  return l*b;
         }
};

int main(){
         Rectangle r1;
         r1.setArea(5,8);
         int area1= r1.getArea();
         cout << "Area: " << area1 << endl;

       
         return 0;
}
