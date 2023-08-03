#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
         string name;
         int age;

         static int count;

public:
         int roll;
         int id;
         void setName();
         void getName();
};
void Student::setName()
{
         cout << "Enter your id: " << endl;
         cin >> id;
         cout << "Enter name: " << name << endl;
         cin >> name;
}
void Student::getName()
{
         cout << "Your name is " << name << " and id is " << id << endl;
}
int Student::count = 0;
int main()
{
         static int count = 0;
         cout << "Enter no. of students: " << endl;
         cin >> count;
         // Student s1;
         // s1.setName();
         // s1.getName();
         int i;
         Student s[100];
         for (i = 0; i < count; i++)
         {
                  s[i].setName();
                  s[i].getName();
         }
         return 0;
}
