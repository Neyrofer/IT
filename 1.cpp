#include <iostream>
#include <cstdlib>
//программа является учебной
int main()
{
  using namespace std;

  int a = 0, b = 0; // Целые числа.
  cout << "a = ";
  cin >> a;
  cout << "b = ";
  cin >> b;

  cout << "(a + 2b) (a - 2b) = ";
  cout << (a + b) * (a - b) << endl;
  return EXIT_SUCCESS;
}