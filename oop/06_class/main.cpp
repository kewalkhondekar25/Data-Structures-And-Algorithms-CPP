#include <bits/stdc++.h>
using namespace std;

class Student {
  private:
    int id;
  public:
    void get(){
      cout << "Enter id: ";
      cin >> id;
      cout << "You enter: " << id;
    };
    void post();
};

void Student::post(){
  cout << "Enter post id: ";
  cin >> id;
  cout << "You Enter post id: " << id;
};

int main(){
  Student s;
  
  s.get();
  s.post();

  return 0;
}