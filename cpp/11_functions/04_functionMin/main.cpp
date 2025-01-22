#include <iostream>
using namespace std;

int minOfTwo(int a, int b){ //parameters
  if(a < b){
    return a;
  }else{
    return b;
  };
};

int main() {
  cout << "min from 10, 15 is: " << minOfTwo(10, 15);//arguments
  return 0;
};