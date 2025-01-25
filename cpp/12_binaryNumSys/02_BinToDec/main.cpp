#include <iostream>
using namespace std;

/*
6 - 110

0 * 2^0 + 1 * 2^1 + 1 * 2^2  

*/

int binToDec(int bin) {
  int ans = 0, pow = 1;

  while(bin > 0){
    int rem = bin % 10;
    ans += rem * pow;

    bin /= 10;
    pow *= 2;
  };

  return ans;
}

int main() {
  int bin; 

  cout << "Enter a binary: ";
  cin >> bin;

  cout << "Decimal: " << binToDec(bin);

  return 0;
}