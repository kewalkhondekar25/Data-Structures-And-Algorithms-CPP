#include <bits/stdc++.h>
using namespace std;

void rev(int n){

  int rev = 0;

  while(n > 0){
    int ld = n % 10;
    rev = (rev * 10) + ld;
    n/= 10;
  };

  cout << "reverse: " << rev << endl;
}

int main() {
  
  int n;

  cout << "Enter a number to reverse: " << endl;
  cin >> n;
  rev(n);

  return 0;
}

/*
INPUT - 7789
OUTPUT - 9877

INPUT - 1230
OUTPUT - 3212
*/