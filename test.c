#include<stdio.h>
int main()
{
    int n,i,min,j,temp,c=0,s=28;
    printf("Enter the total size of array: ");
    scanf("%d" , &n);
    s += (n*4);
    int arr[n];
    printf("Enter the elements: ");
	for(i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
        c++;
    }
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
            
        }
    }
     printf("\nSorted Array: ");
    for(i=0 ; i<n ; i++)
        printf(" %d" , arr[i]);
}