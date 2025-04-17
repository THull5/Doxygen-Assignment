/**
 * @file Officer.h
 * @author Tyler Hull
 * @date 2025-04-17
 * @brief Header for officers
 * 
 * Header file for our officer class
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

/**
 * Officer class
 *
 * @class Officer class
 */

class Officer : public Employee {
 private:
  double evilness;
 public:

/**
 * Prints msg
 *
 * @pre None
 * @return void 
 * @post Returns text
 * 
 */
  void print(); //prints msg
  

/**
 * calulcautes pay
 *
 * @pre None
 * @return double 
 * @post Returns pay
 * 
 */
  double calculatePay(); //calculate officer's pay
  Officer();
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
