/** VERSION V0.01.T001 **/
#include <stdio.h>

/* Function prototype */
int add_two_number (int num1, int num2);

/* main function here */
/* Answer should be 3 */
int main()
{
  int ans;

  printf ("Hello World\n");

  ans = add_two_number(1, 2);
  printf ("Answer = %d\n", ans);

  return 0;
}


/* Function that retuen summary of two number */
int add_two_number (int num1, int num2)
{
  return (num1 + num2);
}
