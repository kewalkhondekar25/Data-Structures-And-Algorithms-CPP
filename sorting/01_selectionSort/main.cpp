#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
  
  for(int i = 0; i <= n - 2; i++){
    
    int min = i;
    for(int j = i; j <= n -1; j++){
      if(arr[j] < arr[min]){
        min = j;
      };
    };

    swap(arr[i], arr[min]);
  };
};

int main(){

  int arr[6] = {13, 46, 24, 52, 20, 9};
  int n = sizeof(arr) / sizeof(arr[0]);

  selection_sort(arr, n);
  
  for (int val : arr){
    cout << val << endl;
  }

  return 0;
};

/*
[13, 46, 24, 52, 20, 9]

0 - [9, 46, 24, 52, 20, 13]
1 - [9, 13, 24, 52, 20, 46]
2 - [9, 13, 20, 52, 24, 46]
3 - [9, 13, 20, 24, 52, 46]
4 - [9, 13, 20, 24, 46, 52]
5 - NA

swap => 0 to n - 2; min => i++ to n - 1;
*/