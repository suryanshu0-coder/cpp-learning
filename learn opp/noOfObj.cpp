#include <iostream>
using namespace std;

class MyClass {
private:
    static int instanceCount; // Static member variable shared among all instances

public:
    MyClass() {
        instanceCount++; // Increment the instance count whenever a new object is created
    }

    static int getInstanceCount() {
        return instanceCount; // Static member functions can access only static members
    }
};

// Definition of the static member variable outside the class
int MyClass::instanceCount = 0;

int main() {
    MyClass obj1; // Creates the first object of MyClass
    MyClass obj2; // Creates the second object of MyClass
    MyClass obj3; // Creates the third object of MyClass

    // Get the instance count using the static member function
    cout << "Number of instances of MyClass created: " << MyClass::getInstanceCount() << endl;

    return 0;
}
