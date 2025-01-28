#include <bits/stdc++.h>
using namespace std;

void printN(int i, int n){
  
  if(i > n) return;
  
  cout << "num: " << i << endl;
  printN(i + 1, n);
};

int main(){

  int n;
  int i = 1;

  cout << "enter a num: ";
  cin >> n;
  
  printN(i, n);

  return 0;
}