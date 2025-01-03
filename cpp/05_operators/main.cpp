#include <iostream>
using namespace std;

int main() {

  //arithmetic operators
  int a = 2, b = 2;
  int sum = a + b;
  int sub = a - b;
  int mul = a * b;
  int div = a / b;
  int rem = a % b;

  cout << "arithmetic operators \n";
  cout << "sum: " << sum << endl << "sub: " << sub  << endl << "mul: " << mul << endl << "div: " << div << endl << "rem: " << rem << endl;

  int x = 5;
  float y = 2;
  int z = 3;
  cout << "a/b: " << x/y << endl;

  //relational operators
  cout << "arithmetic operators \n";
  cout << "x < y?: " << (x < y) << endl;
  cout << "x > y?: " << (x > y) << endl;
  cout << "x >= y?: " << (x >= y) << endl;
  cout << "x != y?: " << (x != y) << endl;

  //logical operators
  cout << "OR: " << ( (3 < 5) || (3 > 5)) << endl;
  cout << "AND: " << ( (3 > 1) && (1 > 3)) << endl;

  //uniary operators
  int m = 10;
  int n = m++;

  cout << "n: " << n << endl;
  cout << "m: " << m << endl;

  int c = 10;
  int d = ++c;

  cout << "d: " << d << endl;
  cout << "c: " << c << endl;

  return 0;
}