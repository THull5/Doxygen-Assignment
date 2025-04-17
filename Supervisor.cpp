/**
 * @file Supervisor.cpp
 * @author Tyler Hull
 * @date 2025-04-17
 * @brief Driver for our Supervisor Class
 * 
 * Logic for our Supervisor class
 */

#include "Supervisor.h"
#include <iostream>

using namespace std;

Supervisor::Supervisor() { //Intializer
  numSupervised = -1;
}

Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->numSupervised = numSupervised;
}


/**
 * Prints msg
 *
 * @pre None
 * @return void 
 * @post Returns msg
 * 
 */
void Supervisor::print() { //prints msg
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}


/**
 * Calculates pay
 *
 * @pre Employee pay 
 * @return double 
 * @post Returns pay
 * 
 */
double Supervisor::calculatePay() { //calculates supervisor pay
  double val = Employee::calculatePay();
  val = val + val * (.01 * numSupervised);
  return val;
}
