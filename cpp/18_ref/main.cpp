#include <bits/stdc++.h>
using namespace std;

void swapFunc(int* a, int* b){
  int temp = *a;
  *a = *b;
  *b = temp;
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

  return 0;
};