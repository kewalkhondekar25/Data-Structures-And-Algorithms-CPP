#include <bits/stdc++.h>
using namespace std;


int main() {
  //unordered, unique
  unordered_set<int> ust;

  ust.insert(1);
  ust.insert(2);
  ust.insert(1);  //ignores repeated elem
  ust.insert(3);

  for(auto val : ust){
    cout << "unordered set: " << val << endl;
  };

  return 0;
};