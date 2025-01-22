#include <iostream>
#include <climits>
using namespace std;


int main() {

  int arr[] = {12, 33, 2, -1, 44};
  int size = 5;
  int smallest = INT_MAX;

  //smallest in an array
  for(int i = 0; i < size; i++){

    if(arr[i] < smallest){
      smallest = arr[i];
    };

  };

  cout << "smallest is: " << smallest << endl;

  //largest in an array
  int largest = INT_MIN;
  for(int i = 0; i < size; i++){

    if(arr[i] > largest){
      largest = arr[i];
    };

  };

  cout << "largest is: " << largest;


  return 0;
}