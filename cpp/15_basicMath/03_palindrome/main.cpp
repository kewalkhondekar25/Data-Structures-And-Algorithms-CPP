#include <bits/stdc++.h>
using namespace std;

void isPalindronme(int n){
  int Num = n;
  int rem = 0;

  while(n > 0){
    int ld = n % 10;
    rem = (rem * 10) + ld;
    n/= 10;
  };

  if(Num == rem){
    cout << "Its a palindrome" << endl;
  }else{
    cout << "Its not a palindrome " << endl; 
  };
};

int main(){

  int n;

  cout << "Enter a number: ";
  cin >> n;

  isPalindronme(n);

  return 0;
}