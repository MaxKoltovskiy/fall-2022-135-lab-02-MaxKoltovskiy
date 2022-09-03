/* 
Author: Max Koltovskiy
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 2D

Uses an array of ints to compute and print the first 60 numbers of the Fibonacci sequence
*/

#include <iostream>

int main()
{
   int fib[60];

   fib[0] = 0;
   fib[1] = 1;

   std:: cout<< fib[0] << std:: endl << fib[1] << std:: endl;

   for(int i = 2; i<60; i++){
      fib[i] = fib[i-1] + fib[i-2];
      std:: cout<< fib[i] << std:: endl;
   }
   /*
    As the sequence goes over the integer limit, the excess spills over and adds to the negative integer limit. 
    Instead of the result being int_limit + x, the result becomes -(int_limit) + x. 
    This makes it so some of the last few numbers are large negative numbers.
    */ 
   return 0;
}
