#include<iostream>
using namespace std;

class Car{
         private:
         int no;

         public:
         void setNo(int n){
                  no = n;
         }

         void printNo(){
                  cout << "Enter n: " << endl;
                  cin >> no;
                  cout << "The number is: "<< no << endl;
         }

         friend void carHeight(Car c1, Car c2);
};

void carHeight(Car c1, Car c2){ //friend function ma ek na ek choti object as a argument pathauni parxa kina ke tyo friend function ma vaariable laii access garna dot operator use garnu parxa.
         Car c3;
          c3.no = c1.no + c2.no;
         cout << "The sum is: "<< c3.no << endl;
}
int main() {
         int x;
         Car c1,c2;
         c1.setNo(x);
         c1.printNo();

         c2.setNo(x);
         c2.printNo();

         carHeight(c1,c2);
         
         return 0;
}
