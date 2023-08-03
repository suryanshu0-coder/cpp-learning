#include<iostream>
using namespace std;
class volume{
         private:
         int length;
         int width;
         int height;

         public:

         volume(){
                  length = 0;
                  width = 0;
                  height = 0;
         }

         volume(int l,int b, int h){
                  length = l;
                  width = b;
                  height = h;
         }

         void volumeDisplay(){
                  cout<< "The volume is "<<length*width*height<<endl;
         }
};
int main() {

         volume v1(4,7,10);
         v1.volumeDisplay();
         return 0;
}
