#include <iostream>

using namespace std;

int sumOfNum(int n){
  if(n == 1){
    return 1;
  };
  return n + sumOfNum(n - 1);
};

int main(){
  int n = 4;
  cout << sumOfNum(n);
  return 0;
};