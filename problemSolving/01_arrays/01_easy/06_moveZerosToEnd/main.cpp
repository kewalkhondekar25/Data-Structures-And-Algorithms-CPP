#include <bits/stdc++.h>
using namespace std;

void move_zeros(vector<int> &arr){

  int j = -1;
  for(int i = 0; i < arr.size(); i++){

    if(arr[i] == 0){
      j = i;
      break;
    };
  };

  for(int i = j + 1; i < arr.size(); i++){

    if(arr[i] != 0){
      swap(arr[i], arr[j]);
      j++;
    };
  };
};

int main(){

  vector<int> arr = { 1, 0, 2, 3, 2, 0, 0, 4, 5, 1};

  move_zeros(arr);
  
  for(int val : arr){
    cout << val << endl;
  };


  return 0;
}