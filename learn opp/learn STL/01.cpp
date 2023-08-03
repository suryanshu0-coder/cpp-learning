#include <iostream>
#include <string>
using namespace std;

template <class t1=float, class T2=string>
class myClass
{
private:
         t1 data1;
         T2 data2;

public:
         myClass(t1 data1, T2 data2)
         {
                  this->data1 = data1;
                  this->data2 = data2;
         }

         void display()
         {
                  cout << data1 << " " << data2 << endl;
         }
};
int main()
{

         myClass<int, string> myObject1(4, "sth");
         myObject1.display();

         myClass<float, string> myObject2(45, "sth learning");
         myObject2.display();
         return 0;
}
