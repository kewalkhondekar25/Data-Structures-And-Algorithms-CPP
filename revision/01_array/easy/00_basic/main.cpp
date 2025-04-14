#include <bits/stdc++.h>
using namespace std;

int main(){

  int marks[5] = { 90, 85, 70, 65, 55};
  int n = sizeof(marks) / sizeof(int);

  for(int i = 0; i < n; i++){
    cout << marks[i] << endl;
  };

  return 0;
};