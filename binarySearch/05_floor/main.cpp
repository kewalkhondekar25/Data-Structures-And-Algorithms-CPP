#include <bits/stdc++.h>
using namespace std;

int find_floor(vector<int> &arr, int size, int target){

  int low = 0;
  int high = size - 1;
  int ans = -1;

  while(low <= high){

    int mid = (low + high) / 2;

    if(arr[mid] <= target){ //opp to lower bound
      ans = arr[mid];
      low = mid + 1;
    }else{
      high = mid - 1;
    };
  };
  
  return ans;
};

int main(){

  vector<int> arr = { 3, 4, 7, 8, 8, 10};

  cout << find_floor(arr, arr.size(), 5);

  return 0;
};