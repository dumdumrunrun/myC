#include <stdlib.h>
#include <stdio.h>
#include <tgmath.h>
#include <stdbool.h>

#define INT_MAX (2147483647)
#define INT_MIN (-2147483648)
//#define DEBUG
/*
bool isAddOverFlow(int a, int b)
{
  if (a > 0 && ((INT_MAX - a) < b))
  {
    return true;
  }
  if (a < 0 && ((INT_MIN - a) > b))
  {
    return true;
  }
  return false;
}

bool isMulOverFlow(int a, int b)
{
  if (a > 0 && b > 0)
  {
    if (a > INT_MAX / b)
      return true;
  }
  else if (a > 0 && b < 0)
  {
    if (b < INT_MIN / a)
      return true;
  }
  else if (a < 0 && b < 0)
  {
    if (a < INT_MAX / b)
      return true;
  }
  else if (a < 0 && b > 0)
  {
    if (a < INT_MIN / b)
      return true;
  }
  return false;
}
*/
int reverse(int x)
{
  int rev = 0;
  while (x != 0) {
    int pop = x % 10;
    x = x / 10;
    if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
    if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
    rev = rev * 10 + pop;
  }
  return rev;
}

int main(void)
{
  int input = 123456;
  int output = reverse(input);

  printf("output = %d\n", output);


  return 0;
}