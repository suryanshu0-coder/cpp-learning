#include<iostream>
#include <string>
using namespace std;
//typecasting
int main() {

         string str ="123456";
         stoi(str); //string to integer conversion
         cout << str << endl;
         int num = 123;
         to_string(num);// int to string conversion
         cout << num << endl;
         stof(str);// string to float conversion
         cout << num << endl;
         stod(str); // string to double conversion
         cout << str<< endl;
         float n=3.144444;
         static_cast<int>(n); // float to int conversion
         cout<< n << endl;
         int numm=455;
         static_cast<float>(numm); //intn to float conversion
         cout<< numm << endl;
         return 0;
}