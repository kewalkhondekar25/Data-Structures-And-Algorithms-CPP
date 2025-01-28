#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> vec = { 1, 3, 2, 5, 4};

  cout << "before sort: " << endl;
  for(int val : vec){
    cout << val << endl;  //[1, 3, 2, 5, 4]
  };
  
  sort(vec.begin(), vec.end());

  cout << "after sort: " << endl;
  for(int val : vec){
    cout << val << endl;  //[1, 2, 3, 4, 5]
  };

  sort(vec.begin(), vec.end(), greater<int>());

  cout << "desending order: " << endl;
  for(int val : vec){
    cout << val << endl;  //[5, 4, 3, 2, 1]
  };

  return 0;
}