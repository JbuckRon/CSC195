// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <string>

using namespace std;

namespace daron {
    
}

int main()
{
   /*int i = 0;
   float f = 23;
   bool b = 12;*/

   
   string name; 
   char initial;
   int age = 0;
   bool isAdult;
   int zipcode = 0;
   float wage = 0;
   int daysWorked = 0;
   int hoursWorkedPerDay[7];
   const float TAX = 0.085;
   int totalHoursWorked = 0;

   cout << "Enter First Name: ";
   cin >> name;
   
   cout << "Enter initial: ";
   cin >> initial;

   cout << "Enter age: ";
   cin >> age;

   cout << "Enter your Zipcode: ";
   cin >> zipcode;

   cout << "Enter your wage: ";
   cin >> wage;

   cout << "Enter days worked: ";
   cin >> daysWorked;

   if (age >= 18)
   {
    isAdult = true;
   }

   for (int i = 0; i < daysWorked; i++)
   {
       cout << "Enter hours worked for day " << i + 1 << ":";
       cin >> hoursWorkedPerDay[i];      
       totalHoursWorked = totalHoursWorked + hoursWorkedPerDay[i];
   }

   int gross = totalHoursWorked * wage;
   int netIncome = gross - (gross * TAX);

   cout << name << " worked for " << totalHoursWorked << " hours at $" << wage << " per hour.\n" << "Gross income: $" << gross << "\n" << "Net income: $" << netIncome;
  
   

   

   

  /* cin >> name;
   cout << name;*/


   

   /*cout << daron::i << std::endl;

   cout << "Hello Data!\n";*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
