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
         virtual void display()
         {
                  cout << "The value of variable of base class is: " << var_BaseClass << endl;
         }
};

class DerivedClass : public BaseClass
{
private:
         int var_DerivedClass=7;

public:
         // void setVarDerived(int varDerivedClass)
         // {
         //          var_DerivedClass = varDerivedClass;
         // }

         // int getVarDerived()
         // {
         //          return var_DerivedClass=7;
         // }
         void  display()
         {
                  cout << "The value of variable of derived class is: " << var_DerivedClass << endl;
         }
};

int main()
{

         BaseClass BasedClass_object;
         BaseClass *BaseClass_pointer;
         DerivedClass DerivedClass_object;
         DerivedClass *DerivedClass_pointer;
         BaseClass_pointer = &DerivedClass_object;

         BaseClass_pointer->setVarBase(6);
         BaseClass_pointer->getVarBase();
         BaseClass_pointer->display();// This is rule of of c++ that if you point your pointer variable of base class to object of derived class then also the method of base class is called. So to fix this problem we need the concept of virtual function.  Now with the help of virtual function, even if the baseClass_pointer is pointing the object of derived class the method of the derived class will run.In this way the runtime polymorphism will be achieved as the binding of the function takes place during runtime.
         return 0;
}