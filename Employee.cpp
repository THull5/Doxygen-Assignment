/**
 * @file Employee.cpp
 * @author Tyler Hull
 * @date 2025-04-17
 * @brief Employee logic
 * 
 * Employee logic
 */

#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee() { //Intializer
  ID = years = hoursWorked = hourlyRate = -1;
}

Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) { //Reads the information related to Employee class
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}


/**
 * Prints msg
 *
 * @pre none
 * @return void 
 * @post Returns msg
 * 
 */
void Employee::print() { //prints the employee information
  cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
       << endl;
}


/**
 * Prints anni msg
 *
 * @pre Date
 * @return void 
 * @post returns anni msg
 * 
 */
void Employee::anniversary() { //reward message for employee anni
  years++;
  hourlyRate = hourlyRate + hourlyRate * .002;
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!"
       << endl;
}


/**
 * Calculates pay
 *
 * @pre none
 * @return double 
 * @post returns pay
 * 
 */
double Employee::calculatePay() { //functuin to calculate pay
  return hourlyRate * hoursWorked;
}

