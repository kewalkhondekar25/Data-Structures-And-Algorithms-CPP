#include <iostream>
using namespace std;

int main(){
  
  int n = 69;

  if(n >= 0){
    cout << "n is +ve \n";
  } else{
    cout << "n is -ve \n";
  }

  int age;

  cout << "enter age: ";
  cin >> age;

  if(age < 18){
    cout << "you can't drink \n";
  } else if(age >= 18 && age <= 25){
    cout << "you can drink only beer";
  }else{
    cout << "you can drink hard liquore";
  };

  return 0;

};