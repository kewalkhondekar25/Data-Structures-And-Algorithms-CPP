#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int l, int r){

  if(l >= r) return;

  swap(arr[l], arr[r]);
  reverse(arr, l + 1, r -1);

};

int main(){

  int arr[] = { 1, 3, 2, 4, 5};
  reverse(arr, 0, 4);

  for(int val : arr){
    cout << val << endl;
  };

  return 0;
};