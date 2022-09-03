/*
Author: Max Koltovskiy
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 2B

Function print_interval(int L, int U) prints all integers within the interval of L to U excluding U
*/

#include "funcs.h"

void print_interval(int L, int U){
   for(int i = L; i < U; i++){
      std:: cout<< i << " ";
   }
   std:: cout<<"\n";
}