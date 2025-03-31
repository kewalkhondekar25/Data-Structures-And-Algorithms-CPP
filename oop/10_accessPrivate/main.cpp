#include <bits/stdc++.h>
using namespace std;

class Employee {
  
  int employeeId;
  char employeeName[20];
  float salary;

  void setEmployee(){
    cout << "Enter Employee Id: " << endl;
    cin >> employeeId;
    cout << "Enter Employee Name: " << endl;
    cin >> employeeName;
    cout << "Enter Employee Salary: " << endl;
    cin >> salary;

    cout << "You Enter: " << endl;
    cout << "id: " << employeeId << endl << "name: " << employeeName << endl << "salary: " << salary << endl;
  };

  public:
    void getEmployee(){
      setEmployee();//accessing private members into public members
    };
};

int main(){

  Employee emp1, emp2;
  emp1.getEmployee();
  emp2.getEmployee();

  return 0;
};