//find largest element in an array

#include <bits/stdc++.h>
using namespace std;

int find_largest(vector<int> &arr, int n){

  int largest = arr[0];

  for(int i = 0; i < n; i++){
    if(arr[i] > largest){
      largest = arr[i];
    };
  };
  return largest;
};

int main(){

  vector<int> arr = { 1, 3, 2, 5, 4};

  cout << "largest: " << find_largest(arr, arr.size());

  return 0;
}