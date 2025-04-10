#include <bits/stdc++.h>
using namespace std;

int main(){

  string str1 = "valorant champions tour";
  string str2 = "vct";
  string str3 = str1 + str2;//concatination

  cout << str1 << endl;
  cout << str2.length() << endl;//3
  cout << str3 << endl;

  for(char val : str3){
    cout << val << " ";
  };
  cout << endl;

  cout << (str1 == str2) << endl;//false
  cout << (str1 <= str2) << endl;//true - dictionary order

  string name;
  cout << "Enter your name: ";
  getline(cin, name);
  cout << "Name: " << name << endl;

  //reverse a char array
  char word[] = "hello";
  int start = 0;
  int end = strlen(word) - 1;

  while(start <= end){
    swap(word[start], word[end]);
    start++;
    end--;
  };
  cout << word << endl;

  //reverse a string
  reverse(str2.begin(), str2.end());
  cout << str2 << endl;//vct => tcv

  string program;
  
  return 0;
};