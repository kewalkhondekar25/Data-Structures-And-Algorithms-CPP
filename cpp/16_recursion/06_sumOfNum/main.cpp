#include <bits/stdc++.h>
using namespace std;


void printSumOfN(int n, int sum){

  if(n <= 0){
    cout << "sum: " << sum << endl;
    return; 
  };

  sum += n;
  printSumOfN(n - 1, sum);
};

int main(){
  int n;
  int sum = 0;
  cout << "enter a number: ";
  cin >> n;

  printSumOfN(n, sum);

  return 0;
};

/*
INPUT - 3
OUTPUT - 6
*/