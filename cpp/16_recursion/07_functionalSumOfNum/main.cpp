#include <bits/stdc++.h>
using namespace std;

int printSumOfN(int n){
  
  if(n == 0) return 0;
  return n + printSumOfN(n - 1);
}

int main(){

  int n;
  cout << "enter a num: ";
  cin >> n;

  cout << "sum of num: " << printSumOfN(n) << endl;

  return 0;
};