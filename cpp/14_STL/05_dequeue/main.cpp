#include <bits/stdc++.h>
using namespace std;

int main(){

  deque<int> dq;

  dq.push_front(1); //adds 1 to the front
  dq.push_back(69); //adds 10 to the end

  int first = dq.front(); //access 1st elem
  int last = dq.back();

  cout << "first: " << first << endl;
  cout << "last: " << last << endl;


  dq.pop_back();  //removes last elem
  dq.pop_front(); //removes 1st elem

  for(auto it : dq){
    cout << it << endl;
  };

  return 0;
}