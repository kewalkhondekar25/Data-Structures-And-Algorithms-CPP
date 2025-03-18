#include <bits/stdc++.h>
using namespace std;

bool is_armstrong(int n){

  int input = n;
  int total = 0;

  while(n > 0){
    int lastDigit = n % 10;
    total += pow(lastDigit, 3);
    n = n / 10;
  };

  if(input != total){
    return false;
  };

  return true;
}

int main(){
  
  int n = 371;
  cout << is_armstrong(n);

  return 0;
};