#include <bits/stdc++.h>
using namespace std;

vector<int> find_union(vector<int> arr1, vector<int> arr2){

  set<int> st;

  for(int i = 0; i < arr1.size(); i++){
    st.insert(arr1[i]);
  };

  for(int i = 0; i < arr2.size(); i++){
    st.insert(arr2[i]);
  };

  vector<int> temp;
  for(auto val : st){
    temp.push_back(val);
  };
  
  return temp;
};

int main(){

  vector<int> arr1 = { 1, 1, 2, 3, 4, 5 };
  vector<int> arr2 = { 2, 3, 4, 4, 5, 6};

  vector<int> unionArr = find_union(arr1, arr2);

  for(int val : unionArr){
    cout << val << endl;
  };

  return 0;
};