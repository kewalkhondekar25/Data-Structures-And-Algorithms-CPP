#include <bits/stdc++.h>
using namespace std;

int main(){
  
  char str1[] = {'a', 'b', 'c', '\0'};//null char - valid string
  char str2[] = "hello";//string literals
  char name[50];
  char sent[] = "acer predator";
  char para1[100];
  char para2[100];

  cout << str1 << endl << strlen(str1) << endl;//constant pointer
  cout << str2 << endl << strlen(str2) << endl;

  for(char val : str2){
    cout << val << endl;
  };

  int len = 0;
  for(int i = 0; sent[i] != '\0'; i++){
    len++;
  };
  cout << "sentence length: " << len;//13

  cout << "Enter your name: ";
  cin >> name;
  cout << "Hello! " << name << endl;

  cout << "Enter para1: ";
  cin.getline(para1, 100);
  cout << "you typed: " << para1 << endl;

  cout << "Enter para2: ";
  cin.getline(para2, 100, '$');
  cout << "you typed: " << para2 << endl;

  return 0;
};