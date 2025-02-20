#include <bits/stdc++.h>
using namespace std;

int linear_search(vector<int> &arr, int num){

  for(int i = 0; i < arr.size(); i++){
    if(arr[i] == num){
      return i;
    };
  };
  return -1;
};

int main(){

  vector<int> arr = { 6, 7, 4, 1, 8 };
  cout << linear_search(arr, 1);

  return 0;
};