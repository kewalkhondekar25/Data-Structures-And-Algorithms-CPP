#include <iostream>
using namespace std;

int main(){

  char alphabet;

  cout << "enter a character: ";
  cin >> alphabet;

  if(alphabet  >= 'a' && alphabet <= 'z'){
    cout << "you enter lower case alphabet";
  }else{
    cout << "you enter capital case alphabet";
  };

  return 0;
};

//a - z //k
//A - Z