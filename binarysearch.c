#include <stdio.h>
int binarySearch(int ar[], int x, int low, int high)
 {
 while (low <= high) 
 {
    int mid = low + (high - low) / 2;

    if (ar[mid] == x)
      return mid;

    if (ar[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void)
 {
  int ar[] = {3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(ar) / sizeof(ar[0]);
  int x = 4;
  int result = binarySearch(ar, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
  return 0;
}