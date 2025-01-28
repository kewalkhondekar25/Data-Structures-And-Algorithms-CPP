#include <bits/stdc++.h>
using namespace std;

// (int)(log10(n) + 1) => gives no. of digits

int extractLastDig(int n){

  int count = 0;

  while(n > 0){
    int lastDig = n % 10;
    cout << "last digits: " << lastDig << endl;
    n = n / 10;
    count += 1;
    cout << "number: " << n << endl;
  };

  cout << "no of digits: " << count << endl;
};

int main() {

  int n;

  cout << "Enter a number: " << endl;
  cin >> n;
  extractLastDig(n);

  return 0;
}