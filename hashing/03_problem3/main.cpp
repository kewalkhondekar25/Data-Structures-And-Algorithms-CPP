#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cout << "n: ";
  cin >> n;
  int arr[n];

  for(int i = 0; i < n; i++){
    cout << "enter elem: ";
    cin >> arr[i];
  }

  //pre-compute
  map<int, int> mp;
  for(int i = 0; i < n; i++){
    mp[arr[i]]++;
  };

  int q;
  cout << "check n: ";
  cin >> q;
  while(q--){
    int num;
    cout << "n to check: ";
    cin >> num;
    cout << num << " appears " << mp[num] << endl;
  }


  return 0;
};