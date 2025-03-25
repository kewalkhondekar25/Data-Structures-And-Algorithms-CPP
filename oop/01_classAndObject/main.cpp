#include <bits/stdc++.h>
using namespace std;

class Teacher {

private:
  double salary;

public:
  string name;
  string department;
  string subject;

  void changeDepartment(string newDepartment){
    department = newDepartment;
  };

  //setter
  void setSalary(double s){
    salary = s;
  };

  //getter
  double getSalary(){
    return salary;
  };

};

int main(){

  Teacher t1;
  t1.name = "john";
  t1.subject = "C++";
  t1.department = "Computer Science";
  
  t1.setSalary(55000);

  cout << t1.subject;
  cout << t1.getSalary();
  
  return 0;
};