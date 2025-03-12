/*

5 4 3 2 1
5 4 3 2
5 4 3
5 4
5

*/

#include <bits/stdc++.h>
using namespace std;

void print_pattern(int n){
  
  for(int i = 1; i <= n; i++){

    for(int j = 0; j < n - i + 1; j++){
      cout << n - j << " ";
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