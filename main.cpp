/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Kaleah Gonzalez
 */

#include <iostream>
#include "std_lib_facilities.h"
using namespace std;

int main()
{
  string operation;
  double val1, val2;
  cout << "Enter an operation of the following +,-,*,/,plus,minus,mul,div followed by two floating-point values separated by a space: \n";

  while(cin >> operation >> val1 >> val2) {

    double res;

    if(operation == "plus" || operation == "+") 
      res = val1 + val2;
    else if(operation == "minus"|| operation == "-") 
      res = val1 - val2;
    else if(operation == "mul"  || operation == "*")  
      res = val1 * val2;
    else if(operation == "div"  || operation == "/") {
      if(val2 == 0) {

        cout << "Can't divide by zero";
      }
      else {

        res = val1 / val2;
      }
    }
                                                        
  cout << val1 << operation << val2 << " = " << res << endl;

  cout << "Enter an operation of the following +,-,*,/,plus,minus,mul,div followed by two floating-point values separated by a space: \n"; 

  }
  
}


