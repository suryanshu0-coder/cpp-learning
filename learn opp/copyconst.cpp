#include<iostream>
using namespace std;
class Person{
         private:
         string name;
         int age;

         public:
         Person(string n, int a) : name(n),age(a){}

         Person(Person &other){
                 name = other.name;
                 age = other.age;
         }

         void getDetails(){
                  cout<< name<<endl<< age<<endl;
         }
};
int main() {

         Person p("Roman", 69);
         Person p1(p);
         Person p2=p;
         p2.getDetails();
         p1.getDetails();
         return 0;
}
