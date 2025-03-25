#include <bits/stdc++.h>
using namespace std;

/*
void passByReference(int* ptr){//passby reference using pointers
*ptr = 20;
};
*/

void passByReference(int &a){//passby reference using alias

  a = 20;
  
};

int main(){

  int a = 10;
  // passByReference(&a);//passby reference using pointers
  passByReference(a);
  
  cout << a;

  return 0;
};