#include<iostream>
#include<fstream>

/*
Theory:
The useful file in working with C++ are:
1.fstreambase 
2.ifstream -->derived from fstreambase
3.ofstream -->derived from fstreambase

In order to work with file you need to open a file.Primarily there are 2 ways to open a file:
1. using the constructor.
2. using the member function open() of the class.
*/
using namespace std;

int main() {
         string str="Suryanshu is a good programmer";
         ofstream out("01a.txt");
         out << str <<endl;

         string aboutMe = "I am a gopd programmer having good knowledge of programming in C C++ Java Javascript and Python programming programming";
         out << aboutMe <<endl;
         return 0;
}
