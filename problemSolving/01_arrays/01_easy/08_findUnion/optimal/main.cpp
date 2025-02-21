#include <bits/stdc++.h>
using namespace std;

vector<int> find_union(vector<int> &arr1, vector<int> &arr2){

  int i = 0;
  int j = 0;
  int n1 = arr1.size();
  int n2 = arr2.size();

  vector<int> unionArr;

  while(i < n1 && i < n2){

    if(arr1[i] <= arr2[j]){
      if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
        unionArr.push_back(arr1[i]);
      };
      i++;
    }else{
      if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
        unionArr.push_back(arr2[j]);
      };
      j++;
    }
  };

  while(j < n1){
    if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
      unionArr.push_back(arr2[j]);
    };
    j++;
  };
  while(i < n1){
    if(unionArr.size() == 0 || unionArr.back() != arr2[i]){
      unionArr.push_back(arr2[i]);
    };
    j++;
  };

  return unionArr;
}

int main(){

  vector<int> arr1 = { 1, 1, 2, 3, 4, 5 };
  vector<int> arr2 = { 1, 2, 3, 4, 5, 6 };
  
  vector<int> unionArrResult = (arr1, arr2);
  for(int val : unionArrResult){
    cout << val << endl;
  };
  
  return 0;
}