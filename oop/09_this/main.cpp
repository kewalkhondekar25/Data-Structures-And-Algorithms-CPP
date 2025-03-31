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

class Demo {
  
  int x, y;

  public:
    void get(int x, int y){
      this->x = x;//(*this).x
      this->y = y;
      cout << "x: " << x << endl << "y: " << y << endl;
    };
};

int main(){

  Test t1;
  t1.get();
  
  Demo d1;
  d1.get(1, 2);

  return 0;
}