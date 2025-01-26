#include <bits/stdc++.h>
using namespace std;

int main(){

  vector<int> vec = { 1, 2, 3, 4, 5};

  //INSERT
  vec.insert(vec.begin(), 69);

  //[69, 1, 2, 3, 4, 5] => [69, 69, 69, 1, 2, 3, 4, 5]
  vec.insert(vec.begin() + 1, 2, 69);//[no. of elem, elem to add]

  for(auto it : vec){
    cout << it << endl;

  }
  return 0;
}