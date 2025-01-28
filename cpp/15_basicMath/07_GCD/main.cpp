#include <bits/stdc++.h>
using namespace std;

//1, 5 - 1
void gcd(int n1, int n2){

  for(int i = min(n1, n2); i >= 1; i--){
    if(n1 % i == 0 && n2 % i == 0){
      cout << i << " " << "is the GCD" << endl;
      break;
    };
  };
};

int main(){
  
  int n1, n2;
  cout << "enter num one: ";
  cin >> n1;
  cout << "enter num two: ";
  cin >> n2;
  gcd(n1, n2);

  return 0;
}