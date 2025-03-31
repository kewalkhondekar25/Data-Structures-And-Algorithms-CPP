#include <bits/stdc++.h>
using namespace std;

class Employee {
  int employeeID;
  char employeeName[20];
  float employeeSalary;

  public:
  void setEmployee(int id, char name[20], float base);
  void getEmployee();

};

void Employee::setEmployee(int id, char name[20], float base){
  employeeID = id;
  strcpy(employeeName, name);
  employeeSalary = base;
};

void Employee::getEmployee(){
  cout << employeeID << endl;
  cout << employeeName << endl;
  cout << employeeSalary << endl;
};



int main(){

  Employee emp;

  emp.setEmployee(101, "john", 100000);
  emp.getEmployee();

  return 0;
}