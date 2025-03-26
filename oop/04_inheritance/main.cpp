#include <bits/stdc++.h>
using namespace std;

class Person {
public:
  string name;
  int age;

  Person(){

  };

};

class Student: public Person {
public:
  int roll;

  void getInfo(){
    cout << "name: " << name << endl;
    cout << "age: " << age << endl;
    cout << "roll no: " << roll  << endl;
  }
};

int main(){

  Student s1;
  s1.name = "john";
  s1.age = 25;
  s1.roll = 123;
  s1.getInfo();

  return 0;
};


