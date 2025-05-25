#include <iostream>
#include <vector>

using namespace std;

/*BRUTE*/
// int findThatAppearOnce(vector<int> &arr, int n){
//   for(int i = 0; i < n; i++){//O(n^2)

//     int flag = 0;
    
//     for(int j = 0; j< n; j++){
//       if(arr[i] == arr[j]){
//         flag += 1;
//       }
//     };
//     if(flag == 1){
//       return arr[i];
//     };
//   }
//   return -1;
// };

/*BETTER*/
int findThatAppearOnce(vector<int> &arr, int n){// TC => O(3n); SC => O(max elem)

  int max = arr[0];
  for(int i = 0; i < n; i++){
    if(arr[i] > max){
      max = arr[i];
    };
  };

  int hash[max + 1] = { 0 };

  for(int i = 0; i < n; i++){
    hash[arr[i]] += 1;
  };

  for(int j = 0; j < n; j++){
    if(hash[j] == 1){
      return j;
    };
  };

  return -1;
}


int main(){
  vector<int> arr = { 4, 1, 2, 1, 2 };
  int n = arr.size();

  cout << findThatAppearOnce(arr, n);

  return 0;
}