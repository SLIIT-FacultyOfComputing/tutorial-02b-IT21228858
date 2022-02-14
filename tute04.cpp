/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}

long nCr(int n, int r)
{
  int answer;
  int i = 1;
  int n1 = 1, r1 = 1;

  while(i <= n)
  {
    n1 *= i;
    ++i;
  }

  i = 0;

  while(i <= n)
  {
    r1 *= i;
    ++i;
  }

  answer = n1 / r1 * (n - r);

  return nCr;

}

long Factorial(int no)
{
  int i = 1;
  int fac = 1;

  while(i <= no)
  {
    fac *= i;
    --i;
  }
}
