#include <bits/stdc++.h>
using namespace std;

int main() {
  
  //Max Heap
  priority_queue<int> pq;

  pq.push(1); //[1]
  pq.push(4); //[4, 1]
  pq.push(2); //[4, 2, 1]

  pq.pop(); //[2, 1]

  cout << pq.top() << endl;

  //Min Heap
  priority_queue<int, vector<int>, greater<int>> pqMin;

  pqMin.push(2);  //[2]
  pqMin.push(4);  //[2, 4]
  pqMin.push(6);  //[2, 4, 6]

  cout << "min: " << pqMin.top() << endl;

  return 0;
}