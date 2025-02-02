#include <bits/stdc++.h>
using namespace std;

int main(){
  
  int n;
  cout << "enter no of elem: " << endl;
  cin >> n;
  int arr[n];

  for(int i = 0; i < n; i++){
    cout << "enter elem: ";
    cin >> arr[i];
  };

  int hash[13] = {0};
  for(int i = 0; i < n; i++){
    hash[arr[i]] += 1;
  };

  int q;
  cout << "enter queries num: ";
  cin >> q;
  while(q--){
    int num;
    cout << "enter num to check: ";
    cin >> num;
    cout << hash[num] << endl;
  };

  return 0;
}