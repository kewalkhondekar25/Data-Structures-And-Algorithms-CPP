#include <bits/stdc++.h>
using namespace std;

int main() {
  
  //only sorted not unique
  multiset<int> ms;

  ms.insert(1);
  ms.insert(1);
  ms.insert(1);
  ms.insert(69);

  for(auto val : ms){
    cout << val << endl;  // { 1, 1, 1, 69 }
  };

  cout << "no. of 1: " << ms.count(1) << endl; //3

  ms.erase(1);
  for(auto val : ms){
    cout << "after erased: " << val << endl; //{ 69 }
  };


  return 0;
}