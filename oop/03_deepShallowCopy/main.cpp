#include <bits/stdc++.h>
using namespace std;

class Student {
public:
  string name;
  double* cgpaPtr;

  //shallow copy
  Student(string name, double cgpa){
    this->name = name;
    cgpaPtr = new double;
    *cgpaPtr = cgpa;
  };
  // deep copy
  Student(Student &obj){
    this->name = obj.name;
    cgpaPtr = new double;
    *cgpaPtr = *obj.cgpaPtr;
  }
  void getInfo(){
    cout << "Name: " << name << endl;
    cout << "CGPA: " << *cgpaPtr << endl;
  };
};

int main(){

  Student s1("john", 8.5);
  s1.getInfo();

  Student s2(s1);
  s2.name = "david";
  *(s2.cgpaPtr) = 9.0;
  s2.getInfo();

  return 0;
};

/*
shallow copy -
Name: john
CGPA: 8.5
Name: john
CGPA: 9

deep copy - 
Name: john
CGPA: 8.5
Name: david
CGPA: 9
*/
