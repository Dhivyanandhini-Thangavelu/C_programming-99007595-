#include <stdio.h>
#include <string.h>
int main ()
{
  char str[] = "251.250.249.248";
  char *p = strtok (str, ".");
  while (p != NULL)
    {
      printf ("%s\n", p);
      p = strtok (NULL, ".");
      int ip = atoi (p);
      printf ("%d\n", p);
    }

  return 0;
}

