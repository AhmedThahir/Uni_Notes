#include <stdio.h>

int
main ()
{
  int i, j, m, n;
  float x, sum, avg;

  printf ("Number of students: ");
  scanf ("%d", &m);

  i = 1;
  while (i <= m)
    {
      printf ("\nNumber of subjects for student %d: ", i);
      scanf ("%d", &n);
      j = 1, sum = 0;
      while (j <= n)
	{

	  printf ("\nMarks for sub %d: ", j);
	  scanf ("%f", &x);
	  sum += x;
	  j++;
	}

      avg = sum / n;
      printf ("The avg of student %d is: %.2f%\n\n", i, avg);
      i++;
    }

  return 0;
}
