#include <iostream>
using namespace std;

int main() {

  //while
  int count = 1;
  while( count <= 5 ){
    cout << count << endl;
    count++;
  };

  //for
  for(int i = 1; i <= 10; i++){
    cout << "i: " << i << endl;
  };

  //sum of n
  int sum = 0, n = 5;
  for (int i = 1; i <= n; i++){
    sum += i;
  };
  cout << "sum: " << sum;
  
  return 0;
}