#include <bits/stdc++.h>
using namespace std;

int remove_sorted(vector<int> & arr){

  int i = 0;
  for(int j = 1; j < arr.size(); j++){

    if(arr[j] != arr[i]){
      arr[i + 1] = arr[j];
      i++;
    };
  };
  return i + 1;
}

int main(){
  
  vector<int> arr = {1, 1, 2, 2, 3, 3};

  cout << remove_sorted(arr) << endl;

  for(int val : arr){
    cout << val << endl;
  }

  return 0;
}