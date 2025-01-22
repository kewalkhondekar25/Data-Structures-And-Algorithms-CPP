#include <iostream>
using namespace std;

int main() {

  int arr[5] = { 2, 4, 6, 8, 10};
  int size = sizeof(arr) / sizeof(int);

  //loops in array
  for(int i = 0; i < size; i++){
    cout << arr[i] << endl;
  };

  //array inputs
  int arr2[5];
  for(int i = 0; i < (sizeof(arr2) / sizeof(int)); i++){
    cout << "Enter element at " << i << ": ";
    cin >> arr2[i];
  };
  for(int i = 0; i < (sizeof(arr2) / sizeof(int)); i++){
    cout << arr2[i] << endl;
  };
  
  return 0;
}