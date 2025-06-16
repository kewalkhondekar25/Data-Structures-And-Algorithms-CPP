#include <iostream>

using namespace std;

void printOneToN(int n){

  if(n == 1){
    cout << n << endl;
    return;
  };

  cout << n << endl;
  printOneToN(n - 1);
};

int main(){

  int n = 100;
  printOneToN(n);

  return 0;
};