#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){

  for(int i = 0; i < n; i++){

    for(int j = 0; j < n - 1 - i; j++){

      if(arr[j] > arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      };
    };
  };
};

int main(){

  int arr[6] = {13, 46, 24, 52, 20, 9};
  int n = sizeof(arr) / sizeof(arr[0]);
  
  bubble_sort(arr, n);

  for(int val : arr){
    cout << val << endl;
  };

  return 0;
};