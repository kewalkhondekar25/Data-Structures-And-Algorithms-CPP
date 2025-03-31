#include <bits/stdc++.h>
using namespace std;

class Number {

  int a;
  
  public:
    void setNumber(){
      cout << "Enter number: ";
      cin >> a;
    };
    void getNumber();
    void isBig(Number n2);
};

void Number::getNumber(){
  cout << "a: " << a << endl;
};

void Number::isBig(Number n2){
  if(a > n2.a){
    cout << a << " is greater" << endl;
  }else{
    cout << n2.a << " is greater" << endl;
  }
}

int main(){

  Number n1, n2;
  
  n1.setNumber();
  n2.setNumber();

  n1.getNumber();
  n2.getNumber();

  n1.isBig(n2);

  return 0;
};