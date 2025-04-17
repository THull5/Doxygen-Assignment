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

Officer::Officer() {
  evilness = 500;
}

Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}

void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}

double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
