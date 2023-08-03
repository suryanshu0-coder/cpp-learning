#include <iostream>
using namespace std;

/*
Concept of virtual class
       A
       |
_______|_______
|             |
B             C
|______ ______|
       |  
       |   
       D  

*/
class b1
{
    int a;

public:
    void set(int aa)
    {
        a = aa;
    }

    int get()
    {
        return a;
    }
};

class b2 : virtual public b1
{
    int b;

public:
    void set(int bb)
    {
        b = bb;
    }

    int get()
    {
        return b;
    }
};

class b3 : virtual public b1
{
    int c;

public:
    void set(int cc)
    {
        c = cc;
    }

    int get()
    {
        return c;
    }
};

class b4 :  public b2, public b3
{
public:
    void take()
    {
        b1::set(11);
        b2::set(22);
        b3::set(32);
    }

    void display()
    {
        cout << "b1 value: " << b1::get() << endl;
        cout << "b2 value: " << b2::get() << endl;
        cout << "b3 value: " << b3::get() << endl;
    }
};
int main()
{
    b4 o1;

    o1.take();
    o1.display();
    return 0;
}