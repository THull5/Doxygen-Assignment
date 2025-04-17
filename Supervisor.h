/**
 * @file Supervisor.h
 * @author Tyler Hull
 * @date 2025-04-17
 * @brief Header for our supervisor class
 * 
 * Header for our SUpervisor class wowie zowie 
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

/**
 * Supervisor class
 *
 * @class Supervisor class
 */

class Supervisor : public Employee {
 private:
  int numSupervised;
 public:
  void print();
  double calculatePay();
  Supervisor();
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
