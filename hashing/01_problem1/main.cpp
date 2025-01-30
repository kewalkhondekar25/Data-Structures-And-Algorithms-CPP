#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cout << "enter size of array: ";
  cin >> n;

  int arr[n];
  for(int i = 0; i < n; i++){
    cout << "enter elements: ";
    cin >> arr[i];
  };

  //precompute
  int hash[13] = { 0 };
  for(int i = 0; i < n; i++){
    hash[arr[i]] += 1;
  }


  while(n--){
    int number;
    cout << "enter number to check how many times it repeated: ";
    cin >> number;
    //fetch
    cout << "apprered: " << hash[number] << endl;
  }

  return 0;
};