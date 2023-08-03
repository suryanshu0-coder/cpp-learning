#include<iostream>
using namespace std;

union money{
         int cash;
         char wine;
         float pound;
};
int main() {
         money m1;
         m1.cash=5000;
         m1.wine='c';
         m1.pound=340.69;

         // ek choti ma kunai euta member laii matra access garna milxa 
         // yedi hami leyy ek vanda badhi member laii access garna khojyau vanneyy last ma access gareko leyy aru member laii overwtite gardinza

         // In a union, all the members share the same memory space, and only one member can be active at a time. When you assign a value to one member of the union, it overwrites the values of the other members.
         cout<< m1.pound<<endl;
         
         return 0;
}
