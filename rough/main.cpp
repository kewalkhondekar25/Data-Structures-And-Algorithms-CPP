#include <bits/stdc++.h>
using namespace std;

int leftRotateByOne(vector<int> &arr, int n){

  int temp = arr[0];

  for(int i = 1; i < n; i++){
    arr[i - 1] = arr[i];
  };

  arr[n - 1] = temp;
};

int rightRotate(vector<int> &arr, int n){
  
  int temp  = arr[0];
  
}

int main(){

  vector<int> arr = { 1, 2, 3, 4, 5 };
  int n = arr.size();
  leftRotateByOne(arr, n);

  for(int val : arr){
    cout << val << endl;
  };

  return 0;
}