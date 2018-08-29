#include <iostream>
using namespace std;

int main()
{
  int z, i;
  bool prime = true;

  cout << "Enter a positive integer: ";
  cin >> z;

  for(i = 2; i <= z / 2; ++i)
  {
      if(z % i == 0)
      {
          prime = false;
          break;
      }
  }
  if (prime)
      cout << "Number is Prime";
  else
      cout << "Number is not Prime";

  return 0;
}