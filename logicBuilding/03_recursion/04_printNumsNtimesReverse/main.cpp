#include <bits/stdc++.h>
using namespace std;

void printNums(int i, int n){

  if(i >= n) return;

  cout << (n - i) << endl;

  printNums(i + 1, n);
}

int main(){

  int i = 0, n;

  cout << "Enter n:";
  cin >> n;

  printNums(i, n);

  return 0;
}