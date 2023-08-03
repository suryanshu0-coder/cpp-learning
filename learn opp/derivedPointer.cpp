#include <iostream>
using namespace std;
class BaseClass
{
private:
  int var_BaseClass;

public:
  void setVarBase(int varBaseClass)
  {
    var_BaseClass = varBaseClass;
  }

  int getVarBase()
  {
    return var_BaseClass;
  }
  void display()
  {
    cout << "The value of variable of base class is: " << var_BaseClass << endl;
  }
};

class DerivedClass : public BaseClass
{
private:
  int var_DerivedClass;

public:
  void setVarDerived(int varDerivedClass)
  {
    var_DerivedClass = varDerivedClass;
  }

  int getVarDerived()
  {
    return var_DerivedClass;
  }
  void display()
  {
    cout << "The value of variable of derived class is: " << var_DerivedClass << endl;
  }
};
int main()
{

  BaseClass base_object;
  BaseClass *base_pointer;
  base_pointer = &base_object;

  base_pointer->setVarBase(45);
  base_pointer->getVarBase();
  base_pointer->display();

  DerivedClass derived_object;
  DerivedClass *derived_pointer;
  derived_pointer = &derived_object;

  derived_pointer->setVarDerived(55);
  derived_pointer->getVarDerived();
  derived_pointer->display();

  base_pointer = &derived_object;
  derived_pointer->setVarBase(69);
  derived_pointer->getVarBase();
  derived_pointer->display();

  //derived_pointer = &base_object; // this is not allowed in c++
  // As The line derived_pointer = &base_object; is not allowed because derived_pointer is a pointer to an object of the DerivedClass, and base_object is an object of the BaseClass. In C++, a derived class object can be assigned to a base class pointer, but a base class object cannot be assigned to a derived class pointer.

  // In the given code, BaseClass is the base class and DerivedClass is derived from it. When you declare a pointer of type DerivedClass*, it can only point to objects of DerivedClass or its subclasses. base_object is an object of BaseClass, which is not a subclass of DerivedClass, so assigning it to derived_pointer is not allowed.

  return 0;
}
