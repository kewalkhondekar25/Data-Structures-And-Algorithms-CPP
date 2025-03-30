#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;

  cout << "Enter array size: ";
  cin >> n;

  int* p = new int[n];

  for(int i = 0; i < n; i++){
    cout << "Enter number: ";
    cin >> p[i];
  };

  for(int j = 0; j < n; j++){
    cout << p[j] << endl;
  };

  return 0;
};