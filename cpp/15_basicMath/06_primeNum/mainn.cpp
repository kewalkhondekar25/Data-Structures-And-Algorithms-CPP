#include <bits/stdc++.h>
using namespace std;

//5 - 1, 5
void isPrime(int n){
  
  int count = 0;

  for(int i = 1; i <= n; i++){
    if(n % i == 0){
      cout << "prime factors: " << i << endl;
      count++;
    };
  };
  
  if(count == 2){
    cout << "its a prime number" << endl;
  }else{
    cout << "Its not a prime number" << endl;
  };
};

int main() {

  int n;
  cout << "Enter number: ";
  cin >> n;
  isPrime(n);

  return 0;
};

/*
INPUT - 5
OUTPUT - factors => 1, 5 => prime

INPUT - 4
OUTPUT - factors => 1, 2, 4 => Not prime

*/