#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  vector<int> vec;
  cout << "size: " << vec.size() << endl;

  vec.push_back(2);
  cout << "size after pushing 2: " << vec.size() << endl;

  vec.push_back(3);
  cout << "size after pushing 3: " << vec.size() << endl;

  vec.push_back(4);
  cout << "size after pushing 4: " << vec.size() << endl;
  
  cout << "capacity: " << vec.capacity() << endl;

  return 0;
}