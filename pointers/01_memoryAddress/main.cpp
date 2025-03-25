#include <bits/stdc++.h>
using namespace std;

int main(){
  
  int a = 69;
  cout << &a << endl;//0x61ff08
  
  int b = 70;
  
  int* ptr = &b;
  cout << ptr << endl;//0x61ff04

  //pointer to pointer
  int** ptr2 = &ptr;
  cout << ptr2 << endl;
  
  float c = 89.95;
  float* fPtr = &c;
  cout << fPtr;//0x61fefc

  return 0;
}