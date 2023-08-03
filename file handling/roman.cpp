#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
using namespace std;

int main()
{
         string name;
         // cout<<"Enter name : "<<endl;
         // getline(cin , name);

         // ofstream roman("roman.txt");

         // if(roman.is_open()){
         // roman<<"Hi I am "<<name<<endl;
         // }
         // else{
         //          cout<<"File not opened"<<endl;
         // }

         vector<string> v;
         string line;
         ifstream chintu("roman.txt");
         if (chintu.is_open())
         {
                  while (getline(chintu, line))
                  {
                           v.push_back(line);
                  }
         }
         else{
                  cout<<"File not found"<<endl;
         }


         for (const string &line : v)
         {
                  cout << line << endl;
         }

         return 0;
}
