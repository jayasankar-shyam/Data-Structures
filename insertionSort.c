#include <stdio.h>

void insertionSort(int a[], int n)
{
  int key, i, j, temp;
  for (j = 1; j < n; j++)
  {
    i = j - 1;
    key = a[j];
    while (i >= 0 && a[i] > key)
    {
      a[i + 1] = a[i];
      i--;
    }
    a[i + 1] = key;
  }
}
int main()
{
  int i,n;
  printf("Enter the total size of array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements: ");
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  insertionSort(arr,n);
  printf("Sorted list in ascending order:\n");
  for(i=0;i<n;i++)
    printf("%d ", arr[i]);
  return 0;
}
