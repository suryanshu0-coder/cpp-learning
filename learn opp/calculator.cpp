#include <iostream>
#include <cmath>
using namespace std;

char operators;
class SimpleCalculator
{
protected:
         float num1;
         float num2;

public:
         float result;
         SimpleCalculator()
         {
                  num1 = 0;
                  num2 = 0;
         }
         SimpleCalculator(int n1, int n2)
         {
                  num1 = n1;
                  num2 = n2;
         }

         void inputNumberForSimpleCalculation()
         {
                  cout << "Enter operator[+,-,*,/]" << endl;
                  cin >> operators;
                  cout << "Enter two number" << endl;
                  cin >> num1 >> num2;
         }

         void SimpleCalculation()
         {
                  switch (operators)
                  {
                  case '+':
                           result = num1 + num2;
                           cout << "The sum is: " << result << endl;
                           break;

                  case '-':
                           result = num1 - num2;
                           cout << "The difference is: " << result << endl;
                           break;

                  case '*':
                           result = num1 * num2;
                           cout << "The product is: " << result << endl;
                           break;

                  case '/':
                           result = num1 / num2;
                           cout << "The division is: " << result << endl;
                           break;

                  default:
                           cout << "Invalid opreation" << endl;
                           break;
                  }
         }

         void displaySimpleCalculation()
         {
                  cout << "The result obtained  is: " << result << endl;
         }
};

class ScientificCalculator
{
protected:
         float num1, num2;

public:
         float result;
         void inputNumberForScientificCalculation()
         {
                  cout << "Enter operator[^,||,cosine,]" << endl;
                  cin >> operators;
                  cout << "Enter two number" << endl;
                  cin >> num1 >> num2;
         }

         void ScientificCalculation()
         {
                  switch (operators)
                  {
                  case '1':
                           result = pow(num1, num2); // num2 is power of num1
                           cout << "The power is: " << result << endl;
                           break;

                  case '2':
                           sqrt(pow(num1, 2) + pow(num2, 2)); // magnitude of result
                           cout << "The magnitude is: " << result << endl;
                           break;

                  case '3':
                           result = cos(num1);
                           cout << "The cosine of num1  is: " << result << endl;
                           break;

                  case '4':
                           result = log(num2);
                           cout << "The logarithm of num2 is: " << result << endl;
                           break;

                  default:
                           cout << "Invalid opreation" << endl;
                           break;
                  }
         }

         void displayScientificCalculation()
         {
                  cout << "The result obtained  is: " << result << endl;
         }
};

class Hybrid : public SimpleCalculator, public ScientificCalculator
{
public:
         void takeInput()
         {
                  inputNumberForSimpleCalculation();
                  inputNumberForScientificCalculation();
         }

         void calculation()
         {
                  void SimpleCalculation();
                  void ScientificCalculation();
         }

         void display()
         {
                  void displaySimpleCalculation();
                  void displayScientificCalculation();
         }
};

int main()
{
         Hybrid h1;

         h1.takeInput();
         h1.calculation();
         h1.display();

         return 0;
}
