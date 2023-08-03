#include<iostream>
using namespace std;
class hcf{
         private:
         int num1, num2;

         public:
         hcf(){}

         hcf(int n1,int n2,int n3){
                  num1 = n1;
                  num2 = n2;
         }

         void input(){
                  cout << "Enter the number: "<<endl;
                  cin>>num1>>num2;
         }

         int findHCF(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        int remainder = a % b;
        return findHCF(b, remainder);
    }
}

};
int main() {

         hcf h1;
         int num1,num2;
         h1.input();
         int hcf= h1.findHCF(num1,num2);

         cout << "The HCF of " << num1 << " and " << num2 << " is: " << hcf << endl;
         return 0;
}
