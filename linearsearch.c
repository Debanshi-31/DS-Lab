#include <stdio.h>
int main()
{
  int ar[100], s, c, i,n;

  printf("Enter number of elements in array\n");
  scanf("%d",&n);

  printf("Enter your %d elements\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &ar[i]);

  printf("Enter a number to search\n");
  scanf("%d", &s);

  for (i = 0; i < n; i++)
  {
    if (ar[i] == s)  
    {
      printf("element found in %d position.\n", i+1);
      break;

    }
  }
  if (i == n)
    printf("%d not present in the array\n", s);

  return 0;
}