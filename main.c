/** VERSION V0.02 **/
#include <stdio.h>

#ifdef __DEBUG__
# define DEBUG_PRINT(x) printf x
#else
# define DEBUG_PRINT(x) do {} while (0)
#endif

int add_two_number (int num1, int num2);
int sub_two_number (int num1, int num2);

int main()
{
  int ans;
  DEBUG_PRINT (("DEBUG: main entry\n"));

  printf ("Hello World\n");

  DEBUG_PRINT (("DEBUG: call function\n"));
  ans = add_two_number(1, 2);
  printf ("Answer = %d\n", ans);

  ans = sub_two_number(1, 2);
  printf ("Answer = %d\n", ans);

  DEBUG_PRINT (("DEBUG: main end\n"));
  return 0;
}


int add_two_number (int num1, int num2)
{
  DEBUG_PRINT (("DEBUG: add_two_number entry\n"));
  return (num1 + num2);
}

int sub_two_number (int num1, int num2)
{
  DEBUG_PRINT (("DEBUG: sub_two_number entry\n"));
  // Modify - start >>>
  return (num1 - num2);
  // Modify -end <<<
}
