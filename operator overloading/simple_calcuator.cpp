#include <iostream>
using namespace std;
class Calculator
{
         int first;
         int second;

public:
         Calculator(int f, int s) : first(f), second(s) {}

         Calculator operator+(Calculator other)
         {
                  return Calculator(first + other.first, second + other.second);
         }
         Calculator operator-(Calculator other)
         {
                  return Calculator(first - other.first, second - other.second);
         }
         Calculator operator*(Calculator other)
         {
                  return Calculator(first * other.first, second * other.second);
         }
         Calculator operator/(Calculator other)
         {
                  return Calculator(first / other.first, second / other.second);
         }
         bool operator==(Calculator other)
         {
                  return (first == other.first) && (second == other.second);
         }
         bool operator!=(Calculator other)
         {
                  return !(*this ==other);
         }

         void display()
         {
                  cout << "The value is : "
                       << " (" << first << " , " << second << ") " << endl;
         }
};
int main()
{
         Calculator c1(4, 6);
         Calculator c2(3, 5);

         Calculator c3 = c1 + c2;
         Calculator c4 = c1 - c2;
         Calculator c5 = c1 * c2;
         Calculator c6 = c1 / c2;
         bool c7 = (c1 == c2);
         bool c8 = (c1 != c2);

         c3.display();
         c4.display();
         c5.display();
         c6.display();

         cout<<c7<<endl;
         cout<<c8<<endl;

         return 0;
}
