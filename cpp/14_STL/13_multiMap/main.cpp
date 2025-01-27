#include <bits/stdc++.h>
using namespace std;

int main() {
  
  //duplicate keys, sorted
  multimap<int, int> mmp;

  mmp.emplace(1, 1);
  mmp.emplace(1, 1);
  mmp.emplace(2, 2);
  mmp.emplace(2, 2);

  for(auto val : mmp){
    cout << val.second << endl; //[ {1, 1}, {1, 1}, {2, 2}, {2, 2}]
  };

  return 0;
}