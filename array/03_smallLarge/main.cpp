#include <iostream>
#include <climits>
using namespace std;


int main() {

  int arr[] = {12, 33, 2, -1, 44};
  int size = 5;
  int smallest = INT_MAX;

  for(int i = 0; i < size; i++){
    if(arr[i] < smallest){
      smallest = arr[i];
    };
  };

  cout << "smallest is: " << smallest;

  return 0;
}