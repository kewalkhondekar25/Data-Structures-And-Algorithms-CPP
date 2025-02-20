//largest element in an array - brute, better, optimal
#include <bits/stdc++.h>
using namespace std;

int find_largest(int arr[], int size){

  int largest = arr[0];

  for(int i = 0; i < size; i++){
    if(arr[i] > largest){
      largest = arr[i];
    };
  };

  return largest;
};

int main(){

  int arr[5] = {1, 8, 7, 56, 90};

  int size = sizeof(arr) / sizeof(arr[0]);

  cout << find_largest(arr, size);
};

//largest - 90
//t.c - O(n)