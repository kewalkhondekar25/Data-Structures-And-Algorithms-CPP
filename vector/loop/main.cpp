#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  vector<int> vec1 = { 1, 2, 3, 4, 5};
  vector<char> vec2 = {'a', 'b', 'c'};

  //for-each
  for(int val : vec1){
    cout << val << endl;
  };

  for(char val : vec2){
    cout << val << endl;
  };

  return 0;
};