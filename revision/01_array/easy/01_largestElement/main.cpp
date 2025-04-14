#include <bits/stdc++.h>
using namespace std;

int findLargest(vector<int> &arr, int n){

  int largest = arr[0];
  
  for(int i = 0; i < n; i++){
    if(arr[i] > largest){
      largest = arr[i];
    };
  };

  return largest;
};

int main(){
  
  vector<int> arr = { 3, 2, 1, 5, 2 };
  int n = arr.size();

  cout << findLargest(arr, n);

  return 0;
};