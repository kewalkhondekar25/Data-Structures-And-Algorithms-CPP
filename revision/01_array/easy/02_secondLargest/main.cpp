#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &arr, int n){

  int largest = arr[0];
  int secondLargest = -1;

  for(int i = 0; i < n; i++){
    if(arr[i] > largest){
      secondLargest = largest;
      largest = arr[i];
    }else if(arr[i] < largest && arr[i] > secondLargest){
      secondLargest = arr[i];
    };
  };

  return secondLargest;
};

int main(){

  vector<int> arr = { 1, 2, 4, 7, 7, 5 };
  int n = arr.size();

  cout << secondLargest(arr, n);

  return 0;
};