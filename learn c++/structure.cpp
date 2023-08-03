#include<iostream>
using namespace std;

struct employee {
         int id;
         char name;
         float age;
};
int main() {
         employee e[5];
         for (int i = 0; i < 3; i++) {
                  cout<< "Enter name: " << endl;
                  cin >> e[i].name;
                   cout<< "Enter id: " << endl;
                   cin >> e[i].id;
                    cout<< "Enter age: " << endl;
                    cin >> e[i].age;
         }
         for (int i = 0; i < 3; i++) {
                   cout << e[i].name<< endl;
                   cout << e[i].id<< endl;
                    cout << e[i].age<< endl;
         }
         return 0;
}
