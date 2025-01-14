#include <iostream>
using namespace std;

int main()
{

  // while
  int count = 1;
  while (count <= 5)
  {
    cout << count << endl;
    count++;
  };

  // for
  for (int i = 1; i <= 10; i++)
  {
    cout << i << endl;
  };

  int sum = 0, n = 5;
  for (int i = 1; i <= n; i++)
  {
    sum += i;
  };
  cout << "sum: " << sum << endl;

  // sum of odd num 1 to 5
  int sumOfOdd = 0;
  for (int i = 1; i <= 5; i++)
  {
    if (i % 2 != 0)
    {
      sumOfOdd += i;
    }
  };
  cout << "sum of odd: " << sumOfOdd << endl;

  // do-while loop
  int j = 1, val = 5;
  do
  {
    cout << "do while: " << j << endl;
    j++;
  } while (j <= val);

  // num is prime or not;
  int last = 7;
  bool isPrime = true;

  for (int i = 2; i <= (last - 1); i++){

    if (last % i == 0){
      isPrime = false;
      break;
    };

  };

  if(isPrime == true){
    cout << "prime \n";
  }
  else{
    cout << "non prime \n";
  };

  //nested loop

  return 0;
}