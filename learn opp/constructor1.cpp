#include<iostream>
#include<string>
using namespace std;

class person{
        int age;
        string name;

        public:

         
        person(){
                age=0;
                name = "";
        }

        person(int a){
              age=a;  
        }

        person(int a, string n){
                age = a;
                name = n;
         }

         void input(){
                cout<< "Enter name: "<< endl;
                cin>> name;
                cout<< "Age: "<< endl;
                cin>> age;
         }

         void output(){
                cout << "The age is "<< age<< endl;
                cout<< "The name is "<< name<< endl;
         }
};
int main() {
        int a;
        string n;
        person p1;
        p1.input();
        p1.output();

        person p2(35);
        person p3(45);

        
        return 0;
}
