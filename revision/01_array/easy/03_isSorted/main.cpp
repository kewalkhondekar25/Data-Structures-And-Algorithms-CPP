#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &arr, int n){

  for(int i = 0; i < n - 1; i++){
    if(arr[i] <= arr[i + 1]){
      //
    }else{
      return false;
    }
  };
  return true;
};

int main(){

  vector<int> arr = { 1, 2, 3, 4, 5};
  int n = arr.size();

  cout << isSorted(arr, n);

  return 0;
};