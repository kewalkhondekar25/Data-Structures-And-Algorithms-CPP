#include <bits/stdc++.h>
using namespace std;

void printName(int i, int n){

  if(i > n) return;

  cout << "john" << endl;

  printName(i + 1, n);
};

int main(){
  int i = 1, n;
  cout << "Enter n: ";
  cin >> n;
  
  printName(i, n);
  
  return 0;
}