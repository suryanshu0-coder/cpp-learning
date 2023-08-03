#include <iostream>
using namespace std;

class Developer
{
public:
         int noOfLanguagesLearned;

         void input()
         {
                  cout << "Enter the number of languages learned: ";
                  cin >> noOfLanguagesLearned;
         }

         void output()
         {
                  cout << "The number of languages learned is: " << noOfLanguagesLearned << endl;
         }
};

class WebDeveloper : public Developer
{
public:
         int noOfWebProjectsDone;

         void inputWebProjects()
         {
                  cout << "Enter the number of web projects done: ";
                  cin >> noOfWebProjectsDone;
         }

         void outputWebProjects()
         {
                  cout << "The number of web projects done is: " << noOfWebProjectsDone << endl;
         }

         void outputAllInfo()
         {
                  output();            // Accessing the inherited member function from the base class
                  outputWebProjects(); // Accessing the derived class member function
         }
};

int main()
{
         WebDeveloper wd1;

         wd1.input();
         wd1.inputWebProjects();
         wd1.outputAllInfo();

         return 0;
}
