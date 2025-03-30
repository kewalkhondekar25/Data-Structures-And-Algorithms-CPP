#include <bits/stdc++.h>
using namespace std;

void swapFunc(int* p, int* q){//call by address - stores address
  int temp = *p;
  *p = *q;
  *q = temp;
};

void exchange(int &a, int &b){//call by reference - stores alias
  int temp = a;
  a = b;
  b = temp;
};

int main(){

  int a = 100;
  int &b = a;
  int &c = b;
  cout << a << endl << b << endl << c << endl;

  c = 200;
  cout << a << endl << b << endl << c << endl;

  int x = 10, y = 20;
  cout << "x: " << x << endl << "y: " << y << endl;

  swapFunc(&x, &y);
  cout << "x: " << x << endl << "y: " << y << endl;

  int p = 1, q = 2;
  cout << "p: " << p << endl << "q: " << q << endl;

  exchange(p, q);
  cout << "p: " << p << endl << "q: " << q << endl;

  return 0;
};