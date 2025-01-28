#include <bits/stdc++.h>
using namespace std;

//1, 2, 3, ... n
void printDivisors(int n){
  for(int i = 1; i <= n; i++){
    if((n % i) == 0){
      cout << i << endl;
    };
  };
};

int main(){

  int n;

  cout << "Enter a num: ";
  cin >> n;
  printDivisors(n);
  return 0;
};

/*
INPUT - 36
OUTPUT - 1, 2, 3, 4, 6, 9, 12, 18, 36

INPUT - 52
OUTPUT - 1, 5
*/