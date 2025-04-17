/**
 * @file Officer.cpp
 * @author Tyler Hull
 * @date 2025-04-17
 * @brief Driver for Officer
 * 
 * Logic file for our officer
 */

#include "Officer.h"
#include <iostream>

using namespace std;

Officer::Officer() { //Initializer
  evilness = 500;
}

Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) { //Read information from employee/officer class
  this->evilness = evilness;
}


/**
 * Prints msg
 *
 * @pre None
 * @return void 
 * @post Prints msg
 * 
 */
void Officer::print() { //prints infor
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}


/**
 * Calculates pay
 *
 * @pre None
 * @return double 
 * @post Returns pay
 * 
 */
double Officer::calculatePay() { //calculates pay
  return (hourlyRate + evilness) * hoursWorked;
}
