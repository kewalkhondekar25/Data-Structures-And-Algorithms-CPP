#include <bits/stdc++.h>
using namespace std;

int main() {
  
  list<int> ls = {1, 2};  //[1, 2]

  ls.push_back(69); //[1, 2, 69]
  ls.emplace_back(70); //[1, 2, 69, 70]
  ls.push_front(69);  //[69, 1, 2, 69, 70]
  ls.emplace_front(); //[0, 69, 1, 2, 69, 70]

  // for( list<int>::iterator it = ls.begin(); it != ls.end(); it++){
  //   cout << *it << endl;
  // };

  for(auto it : ls){
    cout << it << endl;
  };

  return 0;
};