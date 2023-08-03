#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
   int age;
   string name;

public:
   void setName(string n)
   {
      name = n;
   }
   void setAge(int a)
   {
      age = a;
   }

   string inputName()
   {
      cout << "Enter name: " << endl;
      cin >> name;
      return name;
   }
   int inputAge()
   {
      cout << "Enter age: " << endl;
      cin >> age;
      return age;
   }

   string outputName()
   {
      cout << "The name is " << name << endl;
      return name;
   }
   int outputAge()
   {
      cout << "The age is " << age << endl;
      return age;
   }
};
int main()
{
   int i, n;
   Student s[100];
   
   cout << "Enter number of students: " << endl;
   cin >> n;
   for (i = 0; i < n; i++)
   {
      string name =s[i].inputName();
      int age = s[i].inputAge();

       s[i].setName(name);
      s[i].setAge(age);

      s[i].outputName();
      s[i].outputAge();
   }
   return 0;
}
