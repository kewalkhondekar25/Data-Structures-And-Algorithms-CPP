#include <bits/stdc++.h>
using namespace std;

void leftRotateByOnePlace(vector<int> &arr){

  int temp = arr[0];
  for(int i = 1; i < arr.size(); i++){
    arr[i - 1] = arr[i];
  };
  arr[arr.size() - 1] = temp;
};

int main(){

  vector<int> arr = {1, 2, 3, 4, 5};

  leftRotateByOnePlace(arr);

  for(int num : arr){
    cout << num << endl;
  };

  return 0;
}