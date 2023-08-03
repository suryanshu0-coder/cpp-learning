#include<iostream>
using namespace std;

class Student {
         private:
         int age;
         int id;

         public :
         void setAge(int a)
         {
                  age = a;
         }
         void getAge(){
                  cout << "Age: " << endl;
                  cin >> age;
         }
         void printAge(){
                  cout << " The Age: " << age << endl;
         }
         void setId(int d){
                  id = d;
         }

         void getId(){
                  cout << " The Id: " << id << endl;
                  cin >> id;
                  cout << " The Id: " << id << endl;
         }

        
};
int main() {
         int a,i,n ,d;
         cout << "Enter no of students: " << endl;
         cin >> n;
         Student s1;
         Student s[20];
         s1.setAge(a);
         s1.getAge();
         s1.printAge();
         for(i=0; i<n;i++){
         s[i].setAge(a);
         s[i].getAge();
         s[i].printAge();
         s[i].setId(d);
         s[i].getId();
         }
         return 0;
}
