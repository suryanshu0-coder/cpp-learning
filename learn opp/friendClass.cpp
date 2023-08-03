#include <iostream>
using namespace std;

class Company2; // Forward declaration

class Company1
{
private:
    int id;
    int age;

public:
    Company1() {} // constructor

    void setId(int i)
    {
        id = i;
    }

    int getId()
    {
        return id;
    }

    void inputId()
    {
        cout << "Enter id: ";
        cin >> id;
    }

    friend class Company2;
};

class Company2
{
public:
    void setAge(Company1 &c, int a) //passing the object by reference
    {
        c.age = a;
    }

    int getAge(Company1 &c)
    {
        return c.age;
    }
};

int main()
{
    Company1 c1;
    Company2 c2;

    c1.setId(123);
    int finalId = c1.getId();
    cout << "The value of c1 for testing is: " << finalId << endl;

    c2.setAge(c1, 25);
    int finalAge = c2.getAge(c1);
    cout << "The value of c1's age for testing is: " << finalAge << endl;

    return 0;
}
