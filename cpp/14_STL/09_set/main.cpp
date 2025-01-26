#include <bits/stdc++.h>
using namespace std;

int main() {
  
  set<int> st;

  st.insert(1); //{ 1 }
  st.insert(2); //{ 1, 2 } 
  st.insert(2); //duplicate ignored
  st.insert(3); //{ 1, 2, 3 }
  st.insert(69);  //{ 1, 2, 3, 69}

  cout << "set: " << endl;
  for(auto val : st){
    cout << val << endl;
  };

  auto it1 = st.find(69);  //69 => returns 69's iterator
  cout << *it1 << endl;

  auto it2 = st.find(99); //returns st.end() => points after end 
  cout << *it2 << endl;

  st.erase(69); //{ 1, 2, 3 }

  cout << "after erase: " << endl;
  for(auto val : st){
    cout << val << endl;
  };

  int cnt1 = st.count(1);
  int cnt2 = st.count(99);  // 0, 99 is not present in => { 1, 2 }
  cout << "cnt1: " << cnt1 << endl;
  cout << "cnt2: " << cnt2 << endl;

  auto e1 = st.find(1);
  auto e2 = st.find(2);

  st.erase(e1, e2); // deletes 1 => { 2, 3 }
  for(auto val : st){
    cout << "erased: " << val << endl;
  };

  return 0;
};