#include <bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> &arr, int n, int target){

  int low = 0;
  int high = n - 1;
  int i = n;

  while(low <= high){

    int mid = (low + high) / 2;

    if(arr[mid] >= target){
      i = mid;
      high = mid - 1;
    }else{
      low = mid + 1;
    };
  };

  return i;
};

int upper_bound(vector<int> &arr, int n, int target){

  int low = 0;
  int high = n - 1;
  int i = n;

  while(low <= high){

    int mid = (low + high) / 2;

    if(arr[mid] > target){
      i = mid;
      high = mid - 1;
    }else{
      low = mid + 1;
    };
  };

  return i;
};

vector<int> find_first_last_occurences(vector<int> &arr, int n, int target){
  int lb = lower_bound(arr, n, target);
  int ub = upper_bound(arr, n, target);

  if((lb == n) || (arr[lb] != target)){
    return { -1, -1 };
  };

  return { lb, ub - 1};
};

int main(){

  vector<int> arr = { 2, 4, 6, 8, 8, 8, 11, 13 };

  int target = 20;
  vector<int> indexes = find_first_last_occurences(arr, arr.size(), target);

  for( int val : indexes){
    cout << val << endl;
  };

  return 0;
};