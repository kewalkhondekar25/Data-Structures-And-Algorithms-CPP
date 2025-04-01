#include <bits/stdc++.h>
using namespace std;

class Test {

  int a, b;
  public:
    Test(){
      a = 10;
      b = 20;
    };

    void get(){
      cout << a << endl << b;
    };
};

int main(){

  Test t; 
  t.get();
  
  return 0;
}