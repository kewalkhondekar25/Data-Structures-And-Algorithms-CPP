#include <bits/stdc++.h>
using namespace std;

int main() {
  
  queue<int> q;

  q.push(1);  //[1]
  q.push(2);  //[1, 2]
  q.emplace(3); //[1, 2, 3]

  cout << "front: " << q.front() << endl;

  q.pop();  //[2, 3]
  cout << "after pop: " << q.front() << endl;

  q.back() += 1;  //[2, 4]
  cout << "after back: " << q.back();
  return 0;
}