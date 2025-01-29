#include <bits/stdc++.h>
using namespace std;

int prinFactorial(int n){

  if(n == 0) return 1;
  return n * prinFactorial(n - 1);

};

int main(){

  int n;
  cout << "enter a num: ";
  cin >> n;

  cout << "factorial: " << prinFactorial(n);

  return 0;
};

/*
INPUT - 5
OUTPUT - 120
*/