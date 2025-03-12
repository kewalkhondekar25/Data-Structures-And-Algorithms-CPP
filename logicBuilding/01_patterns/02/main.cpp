/*

*
* *
* * *
* * * *
* * * * *

*/

#include <bits/stdc++.h>
using namespace std;

void print_pattern(int n){

  for(int i = 1; i <= n; i++){

    for(int j = 1; j <= i; j++){
      cout << "* ";
    };
    cout << endl;
  };
};

int main(){

  int n;
  cout << "Enter n: ";
  cin >> n;
  print_pattern(n);

  return 0;
}