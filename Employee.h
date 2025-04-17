/**
 * @file Employee.h
 * @author Tyler Hull
 * @date 2025-04-17
 * @brief Header file for Employees
 * 
 * Header file for Employees
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/**
 * Employee class
 *
 * @class Employee class
 */

class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;
 public:

/**
 * Prints msg
 *
 * @pre None
 * @return virtual 
 * @post Returns msg
 * 
 */
  virtual void print();

/**
 * Calculates pay
 *
 * @pre None
 * @return virtual 
 * @post Returns pay
 * 
 */
  virtual double calculatePay(); //calculate employee pay

/**
 * Prints anni msg
 *
 * @pre None
 * @return void 
 * @post Returns anni msg
 * 
 */
  void anniversary(); //print anni msg
  Employee(); 
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
