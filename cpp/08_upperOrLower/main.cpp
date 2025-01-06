#include <iostream>
using namespace std;

int main(){

  char alphabet;

  cout << "enter a character: ";
  cin >> alphabet;

  cout << (int)alphabet << endl;//ASCII

  if(alphabet  >= 'a' && alphabet <= 'z'){
    cout << "you enter lower case alphabet \n";
  }else{
    cout << "you enter capital case alphabet \n";
  };

  int num;
  cout << "enter a number: \n";
  cin >> num;
  cout << (num >= 0 ? "positive" : "negative");

  return 0;
};

//a - z //k
//A - Z