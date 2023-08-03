#include <iostream>
#include <random>
#define rate 0.1
using namespace std;
class Costumer;
class Bank
{
private:
         double bank_details;
         string bank_name;

public:
         void setDaata(double bd, string bn)
         {
                  this->bank_details = bd;
                  this->bank_name = bn;
         }

         int getBalance()
         {
                  return this->bank_details;
         }
         string getAccount()
         {
                  return this->bank_name;
         }

         virtual void inputDetails()
         {
         }
};

class bankEmployee : public Bank
{
public:
         string bankEmployee_name;
         int bankEmployee_id;

public:
         void setBankEmployeeDetails(string bankEmployee_name, int bankEmployee_id)
         {
                  this->bankEmployee_name = bankEmployee_name;
                  this->bankEmployee_id = bankEmployee_id;
         }

         string getBankEmployeenName()
         {
                  return this->bankEmployee_name;
         }
         int getBankEmployeeId()
         {
                  return this->bankEmployee_id;
         }
};

class Costumer : public Bank
{
private:
         string name;
         int bankAccountNo;
         float principal;
         float time;
         double amount;

public:
         void setDetails(string name, int bankAccountNo, float principal, float time, double amount)
         {
                  this->name = name;
                  this->bankAccountNo = bankAccountNo;
                  this->principal = principal;
                  this->time = time;
                  this->amount = amount;
         }

         string getName()
         {
                  return this->name;
         }
         int getBankAccount()
         {
                  return this->bankAccountNo;
         }
         float getprincipal()
         {
                  return this->principal;
         }
         float getTime()
         {
                  return this->time;
         }
         double getAmount()
         {
                  return this->amount;
         }

         void newBankAccount()
         {
                  cout << "Enter details:" << endl;
                  cout << "What is your name?" << endl;
                  cin >> this->name;
                  cout << "What is your bank account number" << endl;
                  cin >> this->bankAccountNo;
                  cout << "Generating random bank account number..." << endl;
                  generateAccountNumber();
         }
         void generateAccountNumber()
         {
                  random_device rd;
                  mt19937 gen(rd());
                  uniform_int_distribution<> dis(100000, 999999);
                  this->bankAccountNo = dis(gen);
                  cout << "Your bank account number: " << this->bankAccountNo << endl;
         }

         void addBankBalance()
         {
                  cout << "Enter the amount you want to add to your account: " << endl;
                  cin >> this->principal;
                  cout << "Enter the time period you can deposit your principle: " << endl;
                  cin >> this->time;
         }

         float findInterest()
         {
                  amount = (principal + ((principal * rate * time) / 100));
                  return amount;
         }

         void checkBalance()
         {
                  cout << "The total amount in your bank account without interest is: " << this->principal << " and the total amount in your bank account with interest is: " << findInterest() << endl;
         }
};

int main()
{
         Costumer costumer;

         cout << "********************************" << endl;
         cout << "Enter '1'  to Add a new bank account" << endl;
         cout << "Enter '2'  to Add bank balance" << endl;
         cout << "Enter '3'  to check the bank balance" << endl;
         cout << "Enter '0' to exit" << endl;

         int choice;
         cout << "Enter your choice[1/2/3/4]" << endl;
         cin >> choice;

         switch (choice)
         {
         case 1:
                  costumer.newBankAccount();
                  break;

         case 2:
                  costumer.addBankBalance();
                  break;

         case 3:
                  costumer.checkBalance();
                  break;

         case 4:
                  exit(0);
                  break;

         default:
                  cout << "Invalid choice!" << endl;
                  break;
         }
         return 0;
}