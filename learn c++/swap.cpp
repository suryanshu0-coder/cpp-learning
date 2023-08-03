#include<iostream>
using namespace std;

void swapPointer(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b=temp; 
}
int main() {
         int x=3,y=4; 
         cout << "The value are: " << x << y << endl;
         swapPointer(&x,&y);
         cout << "The value are: " << x << y << endl;
         return 0;
}
//hami ley pointer kina banako vanda tyo integer matra pathaayo vanneyy seap hudaina kina ke (agar hum kisi ko bluetoo5=th se ganna kisi ko send karangeyy and wo uss fie mein kuch change karega to hamara ganna mein change naii hoga) 
//so like that main function ko value copy hunxa udf ko argument ma ... aba main function laii baal vo  j sukaii gareyy ne tyehii vayera pointer lai linxM kina ke yesleyy address linxa ( call  by reference) and function call garda pane hami leyy a ra b ko address pathayim