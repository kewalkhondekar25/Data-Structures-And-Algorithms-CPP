#include <bits/stdc++.h>
using namespace std;

int find_ceil(vector<int> &arr, int size, int target){

  int low = 0;
  int high = size - 1;
  int ans = -1;

  while(low <= high){

    int mid = (low + high) / 2;

    if(arr[mid] >= target){
      ans = arr[mid];
      high = mid - 1;
    }else{
      low = mid + 1;
    };
  };
  
  return ans;
};

int main(){

  vector<int> arr = {10, 20, 30, 40, 50};

  cout << find_ceil(arr, arr.size(), 25);

  return 0;
};