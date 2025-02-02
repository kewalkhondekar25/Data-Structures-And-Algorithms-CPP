#include <bits/stdc++.h>
using namespace std;

int main(){
  
  string s;
  cout << "enter a string: ";
  cin >> s;

  int hash[26] = { 0 };
  for(int i = 0; i < s.size(); i++){
    hash[s[i] - 'a'] += 1;
  };

  char c;
  while(s.size() - 1){
  cout << "enter a char to check how many times it appears: ";
  cin >> c;
  cout << c << " appreared: " << hash[c - 'a'] << endl;
  };

  return 0;
}