#include <iostream>
#include <vector>

using namespace std;

int findMissing(vector<int> &arr, int n){

  int hash[n + 1] = { 0 };

  for(int i = 0; i < n; i++){
    hash[arr[i]] = 1;
  };

  for(int j = 0; j < n; j++){
    if(hash[j] == 0){
      return j;
    }
  };

  return -1;
};

int main(){
  vector<int> arr = { 0, 1, 3 };
  int n = arr.size();
  
  cout << findMissing(arr, n);
  
  return 0;
};