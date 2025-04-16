#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(vector<int> & arr, int n){

  set<int> st;

  for(int i = 0; i < n; i++){
    st.insert(arr[i]);
  };

  int index = 0;
  for( int val : st){
    arr[index] = val;
    index++;
  };
}

int main(){

  vector<int> arr = { 1, 1, 2, 2, 3, 3, 3};
  int n = arr.size();

  removeDuplicates(arr, n);

  for(int val : arr){
    cout << val << endl;
  };

  return 0;
};