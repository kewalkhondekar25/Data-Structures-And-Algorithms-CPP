#include <iostream>

using namespace std;

int main(){
  cout << "Operators" << endl;
  
  //Arithmatic Operators
  cout << "Arithmatic Operators" << endl;
  int a = 10, b = 5;
  int sum = a + b;
  int sub = a - b;
  int mul = a * b;
  int div = a/b;
  int mod = a % b;
  cout << "sum: " << sum << endl << "sub: " << sub << endl << "mul: " << mul << endl << "div: " << div << endl << "mod: " << mod << endl;

  cout << "division: " << (5/(double)2) << endl;

  //relational Operators
  cout << (3 < 5) << endl << (69 == 69) << endl << (3 >= 4) << endl << (10 != 9) << endl;

};
