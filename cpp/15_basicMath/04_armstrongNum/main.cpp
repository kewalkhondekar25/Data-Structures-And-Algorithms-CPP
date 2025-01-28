#include <bits/stdc++.h>
using namespace std;

void isArmstrong(int n){
  int orignalNum = n;
  int sum = 0;
  int digits = 0;

  int temp = n;
  while (temp > 0){
    temp /= 10;
    digits++;
  };
  
  temp = n;
  while(temp > 0){
    int ld = temp % 10;
    sum = sum + pow(ld, digits);
    temp /= 10;
  };

  if(orignalNum == sum){
    cout << "Its a armstrong number" << endl;
  }else{
    cout << "Its not armstrong number" << endl;
  };

};

int main(){

  int n;

  cout << "Enter a number: ";
  cin >> n;
  isArmstrong(n);
  
  return 0;
};

/*

INPUT - 371
OUTPUT - It's a Armstrong number

INPUT - 1634
OUTPUT - It's not a Armstrong number

*/