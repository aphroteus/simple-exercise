/** VERSION V0.02 **/
#include <stdio.h>

int add_two_number (int num1, int num2);
int sub_two_number (int num1, int num2);

int main()
{
  int ans;

  printf ("Hello World\n");

  ans = add_two_number(1, 2);
  printf ("Answer = %d\n", ans);

  ans = sub_two_number(1, 2);
  printf ("Answer = %d\n", ans);

  return 0;
}


int add_two_number (int num1, int num2)
{
  return (num1 + num2);
}

int sub_two_number (int num1, int num2)
{
  DEBUG_PRINT (("DEBUG: sub_two_number entry\n"));
  return (num1 + num2);
}
