#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> vec = {1, 2, 3, 4, 5};

  //looping vector using iterator
  for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
    cout << *it << endl;
  };

  //auto - automatically detects data type
  for(auto it = vec.begin(); it != vec.end(); it++){
    cout << *it <<endl;
  };
  
  //for-each
  for(auto it : vec){
    cout << it << endl;
  };

  //[11, 12, 13] => [12, 13]
  vector<int> v = { 11, 12, 13};
  v.erase(v.begin());
  cout << v[0] << endl;

  //[101, 102, 103, 104, 105, 106] => [101, 106]
  vector<int> vector = { 101, 102, 103, 104, 105, 106};
  vector.erase(vector.begin() + 1, vector.begin() + 5);
  for(auto it : vector){
    cout << "erased: " << it << endl;
  };

  return 0;
};