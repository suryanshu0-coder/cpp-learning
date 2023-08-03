#include<iostream>
#include<fstream>

using namespace std;

int main() {

         //Writing in file
         ofstream file3("03a.txt");
         string line="Writing in file 3...";
         file3 << line << "\n";
         cout << line << "\n";
         file3.close();

         //Reading in file
         ifstream filee("03a.txt");
         string content;
         getline(filee, content);
         cout << content << "\n";




         return 0;
}
