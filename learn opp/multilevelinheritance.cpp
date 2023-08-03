#include <iostream>
using namespace std;

class Student
{
         int roll_no;

public:
         void set_roll_no(int r)
         {
                  int roll_no = r;
         }

         void get_roll_no()
         {
                  cout << "The roll_no is " << roll_no << endl;
         }
};

class Marks : public Student
{
protected:
         float marks1, marks2;

public:
         void set_marks(float m1, float m2)
         {
                  marks1 = m1;
                  marks2 = m2;
         }

         void get_marks()
         {

                  cout << "The jirst marks is " << marks1 << endl;
                  cout << "The second marks is " << marks2 << endl;
         }
};

class Result : public Marks
{
protected:
         float percentage;

public:
         void set_percentage(float p)
         {
                  percentage = p;
         }

         void display()
         {
                  get_roll_no();
                  get_marks();
                  cout << "The percentage is " << (marks1 + marks2) / 2 << endl;
         }
};
int main()
{

         Result suryanshu;
         suryanshu.set_roll_no(80);
         suryanshu.set_marks(90,96);
         suryanshu.display();
         return 0;
}
