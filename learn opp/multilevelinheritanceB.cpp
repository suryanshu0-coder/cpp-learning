#include<iostream>
using namespace std;

class Employee{
         protected:
         int age;
         int id;

         public:
         void setDetails(int a ,int i){
                  age = a;
                  id=i;
         }

         void getDEtails(){
                  cout<< "The id and age of the employee is " << id<<" "<<endl<< age<<endl;
         }
};

class Developer : public Employee{
         protected:
         int noOfLanguage;
         
         public:
         void setnoOfLanguage(int n){
                  noOfLanguage = n;
         }

         void getnoOfLanguage(){
                  cout<< "The noOfLanguage of the developer is"<< noOfLanguage<<endl;
         }
};

class WebDeveloper : public Developer{
         protected:
         int noOfProjects;

         public:

         void setnoOfProjects(int no){
                  noOfProjects = no;
         }

         void getnoOfProjects(){
                  cout << "The noOfProjects of the developer is"<< noOfProjects<<endl;
         }

         void display(){
                  getDEtails();
                  getnoOfLanguage();
                  getnoOfProjects();
         }
};
int main() {

         WebDeveloper wd1;

         wd1.setDetails(14,100);
         wd1.setnoOfLanguage(5);
         wd1.setnoOfProjects(6);
         wd1.display();
         return 0;
}
