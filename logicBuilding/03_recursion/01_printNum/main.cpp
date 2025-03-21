#include <bits/stdc++.h>
using namespace std;

int counter = 0;

void printNum(){
  
  if(counter == 3) return;

  cout << counter << endl;
  counter++;

  printNum();
};

int main(){

  printNum();

  return 0;
};