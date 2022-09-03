/*
Author: Max Koltovskiy
Course: CSCI-135
Instructor: Michael Zamansky
Assignment:Lab 2A

Asks the user to input an integer in the range 0 < n < 100. If the number is out of range, the program asks to re-enter until the input is valid
*/

#include <iostream>
#include <cmath>

int main()
{
   int user;

   std:: cout<< "Please enter an integer: ";
   std:: cin>> user;
   while(!(0 < user && user < 100 )){
      std:: cout<< "Please re-enter: ";
      std:: cin>> user;
   }

   std:: cout<< "Number squared is "<< pow(user,2) << std:: endl;
   return 0;
}

