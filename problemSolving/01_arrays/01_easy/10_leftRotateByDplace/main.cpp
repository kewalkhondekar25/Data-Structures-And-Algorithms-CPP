#include <bits/stdc++.h>
using namespace std;

void leftRotateByDplaces(vector<int> &arr, int n, int d){

  vector<int> temp(d);
  for(int i = 0; i < d; i++){
    temp[i] = arr[i];
  };

  for(int j = d; j < n; j++){
    arr[j - d] = arr[j];
  };

  int index = (n - d);
  for(int val : temp){
    arr[index] = val;
    index++;
  };
};

int main(){
  vector<int> arr = { 1, 2, 3, 4, 5 }; //3, 4, 5, 1, 2
  int n = arr.size();
  int d = 3;

  leftRotateByDplaces(arr, n, d);

  for(int val : arr){
    cout << val << endl;
  };

  return 0;
};