#include <iostream>
#include <vector>

using namespace std;

int findThatAppearOnce(vector<int> &arr, int n){

  for(int i = 0; i < n; i++){
    
    int flag = 0;
    
    for(int j = 0; j < n; j++){
      if(arr[i] == arr[j]){
        flag += 1;
      }
    };

    if(flag == 0){
      return arr[i];
    };
  };

  return -1;
}
int main(){
  vector<int> arr = { 1, 1, 2, 2, 3 };
  int n = arr.size();

  cout << findThatAppearOnce(arr, n);

  return 0;
}