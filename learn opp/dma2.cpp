#include<iostream>
using namespace std;
class Bank{
         private:
         string name;
         int num;

         public:
         void input(){
                  cout<<"Enter the bank account holder's Name : ";
                  cin>>name;
                  cout<<"\nEnter Account Number of Holder :";
                  cin>>num;
         }

         void display(){
                  cout<<"Account Details are as follows:\n\tName = "<<name<<endl;
         }
};
int main() {
         int size;
         cout<<"Enter the size: "<<endl;
         cin>>size;
         Bank *b = new Bank[size];
         
         for(int i=0; i<size;i++){
                  b->input();
         }

         for(int i=0; i<size;i++){
                  b->display();
         }

         delete[] b;
         return 0;
}
