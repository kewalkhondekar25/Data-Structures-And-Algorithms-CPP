#include <bits/stdc++.h>
using namespace std;

int main() {
  
  //unique keys, unsorted
  unordered_map<int, int> ump;

  ump.emplace(1, 1);
  ump.emplace(1, 1);

  for(auto val : ump){
    cout << val.first << ": " << val.second << endl;  //{1, 1}
  };

  return 0;
};