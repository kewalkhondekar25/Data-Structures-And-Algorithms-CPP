#include <iostream>

using namespace std;

int main(){
  cout << "variables & data type" << endl;
  //int
  int number = 69;
  cout << "number: " << number << endl << "number Byte: " << sizeof(number) << endl;
  //char
  char grade = 'A';
  cout << "grade: " << grade << "grade Byte: " << sizeof(grade) << endl;
  //float
  float PI = 3.14F;
  cout << "PI: " << PI << endl << "PI Byte: " << sizeof(PI) << endl;
  //bool | true -> 1 & false -> 0
  bool isAdult = true;
  cout << "isAdult: " << isAdult << endl << "Bool Byte: " << sizeof(isAdult) << endl;
  //double
  double price = 100.95;

  //type casting
  double cost = 100.99;
  int newCost = (int)cost;
  cout << "type case value: " << newCost << endl;

  //input
  int favNum;
  cout << "Enter fav number: ";
  cin >> favNum;
  cout << "you enter: " << favNum << endl;
  return 0;
};
