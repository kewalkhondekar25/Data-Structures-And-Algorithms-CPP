#include <bits/stdc++.h>
using namespace std;

int second_largest(vector<int> &arr, int size){

  int largest = arr[0];   //7
  int secondLargest = -1; //5

  //i = 5
  //size = 6
  for(int i = 0; i < size; i++){

    if(arr[i] > largest){
      secondLargest = largest;
      largest = arr[i];
    }else if(arr[i] < largest && arr[i] > secondLargest){
      secondLargest = arr[i];
    };
  };

  return secondLargest;
}

int main(){

  vector<int> arr = {1, 2, 4, 7, 7, 5};
  
  int size = arr.size();
  cout << second_largest(arr, size);
}