#include <bits/stdc++.h>
using namespace std;

int second_largest(int arr[], int size){

  int largest = arr[0];
  int secondLargest = -1;

  for(int i = 0; i < size; i++){

    if(arr[i] > largest){
      largest = arr[i];
    };
  };

  for(int i = 0; i < size; i++){

    if(arr[i] > secondLargest && arr[i] != largest){
      secondLargest = arr[i];
    };

  };

  return secondLargest;

}

int main(){

  int arr[6] = {1, 2, 4, 7, 7, 5};

  int size = sizeof(arr) / sizeof(int);

  cout << second_largest(arr, size);
};