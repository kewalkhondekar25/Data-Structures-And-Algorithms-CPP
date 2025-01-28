#include <bits/stdc++.h>
using namespace std;

void printN(int i, int n){

  if(n < i) return;
  
  cout << n << endl;
  printN(i, n - 1);

};

int main(){

  int n, i = 1;
  
  cout << "Enter a number: ";
  cin >> n;
  printN(i, n);
  
  return 0;
};