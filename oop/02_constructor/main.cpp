#include <bits/stdc++.h>
using namespace std;

class Teacher {

private:
  double salary;

public:
  //non-parametized constructor
  Teacher(){
    department = "computer science";
  };
  //parametized constructor
  Teacher(string name, string department, string subject){
    this->name = name;
    this->department = department;
    this->subject = subject;
  };

  //copy constructor
  Teacher(Teacher &obj){
    cout << "copy constructor called\n";
    this->name = obj.name;
    this->subject = obj.subject;
    this->department = obj.subject;
  };

  string name;
  string department;
  string subject;

  void getInfo(){
    cout << "name: " << name << endl;
    cout << "subject: " << subject << endl;
    cout << "department: " << department << endl;
  };

};

int main(){

  Teacher t1("john", "computer science", "c++");
  t1.getInfo();
  
  //copy constructor
  Teacher t2(t1);
  t2.getInfo();

  return 0;
};