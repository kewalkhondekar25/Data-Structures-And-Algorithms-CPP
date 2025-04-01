#include <bits/stdc++.h>
using namespace std;

class Test {

  int a, b;
  public:
    Test(){//default constructor
      a = 10;
      b = 20;
    };

    void get(){
      cout << a << endl << b << endl;
    };
};

class Circle {

  float r;

  public:
    //constructor overloading
    Circle(){
      r = 2;
    };
    
    Circle(float r){//parameterized constructor
      this->r = r;
    };

    void area(){
      cout << 3.14 * r * r << endl;
    };
};

int main(){

  Test t; 
  t.get();

  Circle c1;
  Circle c2(4);
  c1.area();
  c2.area();

  return 0;
}