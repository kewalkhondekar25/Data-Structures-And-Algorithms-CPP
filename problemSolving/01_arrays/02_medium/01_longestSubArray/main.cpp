#include <bits/stdc++.h>
using namespace std;

void subArray(vector<int> &arr, int n){

  
  for(int i = 0; i < n; i++){
    
    vector<int> temp;
    for(int j = i; j < n; j++){
      temp.push_back(arr[j]);
      for(int val : temp){
        cout << val << " ";
      };
      cout << endl;
    };
  };
};

int main(){
  //                  ij
  vector<int> arr = { 1, 2, 3, 1, 1, 1, 1, 4, 2, 3 };
  int n = arr.size();

  subArray(arr, n);

  return 0;
};

/*
[1]
[1, 2]
[1, 2, 3]
*/