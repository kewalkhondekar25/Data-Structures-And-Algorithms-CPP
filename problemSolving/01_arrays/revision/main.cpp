//find largest element in an array

#include <bits/stdc++.h>
using namespace std;

bool is_sorted(vector<int> &arr, int n){

  for(int i = 1; i < n; i++){
    if(arr[i] >= arr[i - 1]){

    }
    else{
      return false;
    }
  };
  return true;
};

int main(){

  vector<int> arr = { 1, 2, 3, 7, 7};

  cout << "is sorted: " << is_sorted(arr, arr.size());

  return 0;
}