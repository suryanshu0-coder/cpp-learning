#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {

         ifstream file("02a.txt");
         string line;
         //file >> line;
         while(file.eof()==0){
         getline(file, line);
         cout << line;
         }
         return 0;
}
