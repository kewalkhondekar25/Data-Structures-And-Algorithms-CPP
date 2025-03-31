#include <bits/stdc++.h>
using namespace std;

class Test {

  int a, b;

  public:
    void get(){
      a = 10;
      b = 20;
      cout << "object address: " << this << endl;//0x61ff18
      cout << "a: " << this->a << endl;//10
      cout << "b: " << this->b << endl;//20
    };
};

int main(){

  Test t1;
  t1.get();
  
  return 0;
}