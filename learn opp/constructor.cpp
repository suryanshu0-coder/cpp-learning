#include <iostream>
using namespace std;
class Student
{
private:
         int age;

public:
         Student()
         {
                  cout << "Enter the age: " << endl;
                  cin >> age;
         }

         void display()
         {
                  cout << "The age is: " << age << endl;
         }
};
int main()
{        Student s1;

         s1.display();
         
         return 0;
}
