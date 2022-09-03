/*
Author: Max Koltovskiy
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 2C

Create an array myData of 10 integers.
Fill all its cells with value 1 (using a for loop).
Print all elements of the array on the screen.
Ask the user to input the cell index i, and its new value v.
If the index i is within the array range (0 ≤ i < 10), update the asked cell, myData[i] = v, and go back to the step 3. Otherwise, if index i is out of range, the program exits.
*/

#include <iostream>

int main()
{
   int myData[10];

   for(int i = 0; i< 10; i++){
      myData[i] = 1;
   }

   int index,value;
   do{
      std:: cout<< "\n";
      for(int i = 0; i< 10; i++){
         std:: cout<<myData[i]<< " ";
      }

      std:: cout<< "\n\nInput index: ";
      std:: cin>> index;
      std:: cout<< "Input value: ";
      std:: cin>> value;

      if(index >= 0 && index < 10){
         myData[index] = value;
      }
      else{
         std:: cout<< "\nIndex out of range. Exit."<< std:: endl;
      }

   }while(index >= 0 && index < 10);
   return 0;
}