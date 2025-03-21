#include <bits/stdc++.h>
using namespace std;

int main(){
  
  //without recursion
  vector<int> arr = {1, 2, 3, 4, 5};

  int i = 0;
  int j = arr.size() - 1;
  int temp;

  while(i < j){
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
  };

  for( int val : arr){
    cout << val;
  };

  return 0;
};
