#include <bits/stdc++.h>
using namespace std;

int insertElement(vector<int> &arr, int n, int k){

  int low = 0;
  int high = n - 1;
  int ans = n;

  while(low <= high){

    int mid = (low + high) / 2;

    if(arr[mid] >= k){
      ans = mid;
      high = mid - 1;
    }else{
      low = mid + 1;
    }
  };

  return ans;
}
int main(){

  vector<int> arr = { 1, 3, 5, 6 };
  int n = arr.size();
  int k = 5;

  cout << insertElement(arr, n, k);

  return 0;
}