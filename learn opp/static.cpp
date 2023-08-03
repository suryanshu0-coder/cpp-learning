#include <iostream>
using namespace std;

class Student
{
private:
        string name;
        int roll;
        string subject;
        static int count;

public:
        void input();
        void display(void);
};

void Student::input()
{
        cout << "Enter Name : " << endl;
        cin >> name;
        cout << "Enter the roll number : " << endl;
        cin >> roll;
        cout << "Enter the subject" << endl;
        cin >> subject;
}

void Student::display()
{
        cout << "Tne name is " << name << " and the roll number is " << roll << " and the subject is " << subject << endl;
}

int count = 0;

int main()
{

        Student s[100];
        int i;
        cout << "Enter the number of the students :" << i << endl;
        cin >> count;
        for (i = 0; i < count; i++)
        {
                s[i].input();
        }

        for (i = 0; i < count; i++)
        {
                s[i].display();
        }
        return 0;
}
