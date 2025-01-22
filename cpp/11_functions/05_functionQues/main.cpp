#include <iostream>
using namespace std;

//sum of N
int sumOfN(int n) {
  int sum = 0;
  for(int i = 0; i <= n; i++){
    sum += i;
  };
  return sum;
};

//factorial of N
int factorialN(int n) {
  int fact = 1;
  for(int i = 1; i <= n; i++){
    fact *= i;
  };
  return fact;
};

int main() {
  cout << "sum of N: " << sumOfN(5) << endl;
  cout << "factorial of N: " << factorialN(4) << endl;
  return 0;
};