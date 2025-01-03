#include <iostream>
using namespace std;

int main() {

  cout << "Variables: " << endl;

  char initial = 'k';
  int age = 69;
  float PI = 3.14f;
  bool isAdult = true; 

  cout << "char: " << initial << endl << "size of char: " << sizeof(initial) << endl << "age: " << age << endl << "size of age: " << sizeof(age) << endl << "float: " << PI << endl << "size of PI: " << sizeof(PI) << endl << "bool: " << isAdult << endl << "size of bool: " << sizeof(isAdult);
  return 0;
};
