#include <iostream>
using namespace std;

class Employee
{
         public:
         string name;
         int age;
         float salary;

         void getDetails();
         void setDetails();
};

// datatype class-name :: function-name()
void Employee::getDetails()
{
         cout << "Enter name: " << endl;
         cin >> name;
         cout << "Enter age: " << endl;
         cin >> age;
         cout << "Enter salary : " << endl;
         cin >> salary;
}
void Employee::setDetails()
{
         cout << "The values are: " << endl;
         cout << "The name is: " << name << endl;
         cout << "The age is: " << age << endl;
         cout << "The salary is: " << salary << endl;
}
int main()
{

         Employee roman,rijan, sulav ;
         roman.getDetails();
         roman.setDetails();
         return 0;
}//yedi yesta dheraii employees xan vanneyy hami ley array banayera manage garxam hamro code laii
