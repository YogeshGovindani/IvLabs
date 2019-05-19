#include<stdio.h>
#include<stdlib.h>

int MinJumps(int n,int A[])
{
	int jumps = 0,i=0,max;
	while (1)
	{
		if (i+A[i] >= n-1)
		{
			jumps++;
			break;
		}
		else
		{
			max=0;
			for (int j=1;j <= A[i];j++)
			{
				if (j+A[j+i] > max)
				{
					max = j+i;
				}
			}
			i=max;
			jumps++;
		}
	}
	return jumps;
}
		
int main()
{
	int n,*A;
	printf("Enter size of array\n");
	scanf("%d",&n);
	A = (int*) malloc(n * sizeof (int));
	printf("Enter array\n");
	for (int i = 0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("%d",MinJumps(n,A));
	return 0;
}
