#include <bits/stdc++.h>
using namespace std;

int longestSubArray(vector<int> &arr, int n, int k){

  int length = 0;

  for(int i = 0; i < n; i++){

    int sum = 0;
    for(int j = i; j < n; j++){
      sum += arr[j];
      if(sum == k){
        length = max(length, j - i + 1);
      };
    };
  };

  return length;
};

int main(){

  vector<int> arr = { 1, 2, 3, 1, 1, 1, 1, 4, 2, 3 };
  int n = arr.size();
  int k = 3;

  cout << longestSubArray(arr, n, k);

  return 0;
};