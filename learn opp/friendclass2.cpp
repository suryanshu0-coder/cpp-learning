#include <iostream>
using namespace std;

class Company2;// Forward declaration
class Student1
{
private:
         int age, id;

public:
         void setId(int i)
         {
                  id = i;
         }

         int getId()
         {
                  return id;
         }

         void inputId()
         {
                  cout << "Enter id: ";
                  cin >> id;
         }

         friend class Student2;
};

class Student2
{
public:
         void setAge(Student1 &c1, int a)
         {
                  c1.age = a;
         }

         int getAge(Student1 &c1)
         {
                  return c1.age;
         }
};
int main()
{

         Student1 s1;
         Student2 s2;

         s1.setId(123);
         int finalId = s1.getId();
         cout << "The value of s1 for testing is: " << finalId << endl;

         s2.setAge(s1, 25);
         int finalAge = s2.getAge(s1);
         cout << "The value of s12's age for testing is: " << finalAge << endl;

         return 0;
}
