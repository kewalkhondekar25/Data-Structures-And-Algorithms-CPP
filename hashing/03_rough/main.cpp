#include <bits/stdc++.h>
using namespace std;

int main(){
  
  string s;
  cout << "enter string: ";
  cin >> s;

  int hash[26] = {0};
  for(int i = 0; i < s.size(); i++){
    hash[s[i] - 'a'] += 1;
  }

  int q;
  cout << "how many char to test: ";
  cin >> q;
  while(q--){
    char ch;
    cout << "enter char: ";
    cin >> ch;
    cout << "apperance: " << hash[ch - 'a'] << endl;
  }


  return 0;
}