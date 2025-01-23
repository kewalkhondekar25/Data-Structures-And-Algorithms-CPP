#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  vector<int> vec1;  //0

  vector<int> vec2 = {1, 2, 3};
  cout << vec2[0];

  vector<int> vec3(3, 0); //[0, 0, 0]

  return 0;
};