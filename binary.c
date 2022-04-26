#include <stdio.h>
int main()
{
	int i, n, l, u, x, mid, c = 0, k, m = 1;
	k = 9 * 4;
	c++;
	char opt;
	k++;
	c++;
	printf("Enter the the size of array: ");
	c++;
	scanf("%d", &n);
	int a[n];
	m = n * 4;
	c++;
	printf("Enter the array elements in increasing order : ");
	c++;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		c++;
	}
	c++;
	printf("The array elements are:\n");
	c++;
	for (i = 0; i < n; i++)
	{
		printf("%d \n", a[i]);
		c++;
	}
	c++;
	do
	{
		printf("Enter the elements to search\n");
		c++;
		scanf("%d", &x);
		c++;
		l = 0;
		c++;
		u = n - 1;
		c++;
		mid = (l + u) / 2;
		c++;
		while (l <= u)
		{
			if (a[mid] == x)
			{
				printf("the element is found at position %d \n", mid + 1);
				c++;

				break;
			}
			else if (x > a[mid])
			{
				l = mid + 1;
				c++;
			}
			else
			{
				u = mid - 1;
				c++;
			}
			c++;
			mid = (l + u) / 2;
			c++;
		}
		if (l > u)
		{
			printf("element is not found\n");
		}
		c++;
		printf("\n Do you want continue? (Y-for yes)");
		c++;
		scanf(" %c", &opt);
		c++;
		printf("The number of execution is %d\n", c);
		printf("The space complexity is %d\n", (k + m));
	} while (opt == 'y' || opt == 'Y');
}
