#include <bits/stdc++.h>
using namespace std;

int main() {
  
  //unique keys in sorted
  map<int, int> mp;

  //INSERT
  mp[1] = 69;
  mp.emplace(3, 71);
  mp.emplace(2, 70);

  for(auto val : mp){
    cout << val.first << ": " << val.second << endl;  // { 1: 69, 2: 70, 3: 71 }
  };

  cout << mp[1] << endl;  //69
  cout << mp[4] << endl;  //0

  auto it = mp.find(1);
  // cout << *(it).second << endl;  //{69}

  return 0;
};