#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  vector<int> vec1;
  vector<int> vec2 = {1, 2, 3, 4, 5};
  
  //vector functions
  cout << "size of vector 2: " << vec2.size() << endl;
  
  vec1.push_back(69);
  cout << "push size: " << vec1.size() << endl;
  cout << "push value: " << vec1[0] << endl;

  vec1.pop_back();
  cout << "pop out size: " << vec1.size() << endl;

  cout << vec2.front() << endl;
  cout << vec2.back() << endl;

  cout << vec2.at(2) << endl;
  
  return 0;
}