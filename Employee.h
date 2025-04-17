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
  virtual void print();
  virtual double calculatePay();
  void anniversary();
  Employee();
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
