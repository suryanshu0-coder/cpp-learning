#include <iostream>
using namespace std;
class Class
{
private:
         string name;
         int id;

public:
         void readData()
         {
                  cout << "Enter Name : ";
                  cin >> name;
                  cout << "Enter id : ";
                  cin >> id;
         }

         void displayData()
         {
                  cout << "Your name is " << name << " and your id  is " << id << endl;
         }
};
int main()
{
         int size;
         cout << "Enter the size" << endl;
         cin >> size;

         Class *c = new Class[size];

         for (int i = 0; i < size; i++)
         {
                  c[i].readData();
         }

         for (int i = 0; i < size; i++)
         {
                  c[i].displayData();
         }

         delete[] c;
         return 0;
}
