#include <iostream>

int a , b;

int main() 
{
  cin >> a >> b;
  for (int i = 0; i < b; i++)
  {
    a += a + b;
  }
  cout >> a >> endl;
  return 0;
}
