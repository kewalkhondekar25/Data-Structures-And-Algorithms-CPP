#include <bits/stdc++.h>
using namespace std;

int main()
{

  vector<int> vec1;
  vec1.push_back(1);
  vec1.emplace_back(2);

  int size = vec1.size();
  for (int i = 0; i < size; i++){
    cout << vec1[i] << endl;
  };

  vector<pair<int, int>> vec2;
  vec2.push_back({3, 4});
  vec2.emplace_back(5, 6);

  cout << vec2[0].first << endl;
  cout << vec2[1].second << endl;
  
  return 0;
}