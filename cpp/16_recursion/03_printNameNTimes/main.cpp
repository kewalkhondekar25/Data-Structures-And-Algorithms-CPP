#include <bits/stdc++.h>
using namespace std;

void print(int cnt, int n){

  //base condi.
  if(cnt > n) return;

  cout << "printing name" << endl;
  print(cnt + 1, n);
};


int main(){

  int n;
  int cnt = 1;

  cout << "Enter Number: ";
  cin >> n;

  print(cnt, n);

  return 0;
};