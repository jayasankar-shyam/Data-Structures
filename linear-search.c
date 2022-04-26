#include<stdio.h>
int main()
{
  int n,count=0,i,t,s,space=24;
  char opt;space+=1;
  printf("Enter the size of array: ");
  scanf("%d" , &n);
  space += (n*4);
  int arr[n];
  printf("Enter Array Elements:");
  for(i=0 ; i<n ; i++)
  {
    scanf("%d" , &arr[i]);
    count++;
  }
  count++;
  t=count;
  s=space;
  do{
      printf("\nEnter the array element to search: ");
      count=t;space=s;
      int x , loc = -1;
      space += 8;
      scanf("%d" , &x);
      count++;
      for(i=0 ; i<n ; i++)
      {
        if(arr[i] == x)
        {
          loc = i;
          count++;
          break;
        }
        count++;
      }
      count++;

      if(loc != -1)
      {
        printf("%d is found at %d" , x,loc);
      }
      else
        printf("%d is not found" , x);
      printf("\nSpace Complexity: %d", space);
      printf("\nTime Complexity: %d", count);
      printf("\nDo you want to continue(Y/N):");
      scanf(" %c",&opt);
  }while(opt =='y'|| opt=='Y');
  return 0;
}
