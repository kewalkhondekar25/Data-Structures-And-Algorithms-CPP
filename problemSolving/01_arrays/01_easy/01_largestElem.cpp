//largest element in an array - brute, better, optimal
#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int n){

  int max = arr[0];
  for(int i = 0; i < n; i++){
    if(arr[i] > max){
      max = arr[i];
    };
  };
  return max;
}

int main(){

  int arr[5] = {3, 2, 1, 5, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << largest(arr, n);
};

//[3, 2, 1, 5, 2]