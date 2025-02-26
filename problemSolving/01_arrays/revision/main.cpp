//find largest element in an array

#include <bits/stdc++.h>
using namespace std;

int find_second_largest(vector<int> &arr, int n){

  int largest = arr[0];
  int slargest = -1;

  for(int i = 0; i < n; i++){
    
    if(arr[i] > largest){
      slargest = largest;
      largest = arr[i];
    }else if(arr[i] < largest && arr[i] > slargest){
      slargest = arr[i];
    };
  };

  return slargest;
};

int main(){

  vector<int> arr = { 1, 2, 3, 7, 7, 5};

  cout << "largest: " << find_second_largest(arr, arr.size());

  return 0;
}