#include <iostream>
using namespace std;
int c;
class Student
{
private:
         int id;
         string name;
         int age;

public:
         void setId(int i)
         {
                  id = i;
         }

         int getId()
         {
                  return id;
         }

         void takeId()
         {
                  cout << "Enter id" << endl;
                  cin >> id;
         }
};
int main()
{
         int x, n;
         int sum = 0;
         cout << "Enter number" << endl;
         cin >> n;

         Student chi[10];
         for (int i = 0; i < n; i++)
         {
                  chi[i].takeId();
                  x = chi[i].getId();
                  // cout << x << endl;
                  sum = sum + x;
         }
         cout << "Thw sum is: " << sum << endl;

         return 0;
}
