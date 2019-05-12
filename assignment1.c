#include<stdio.h>
#include<stdlib.h>


int  function(int n,int i, int Price[],int length[],int m)
{
	int j,t,result = 0,k,l,temp1,temp2;
	if (i==1)
	{
		for (j=n-1;j>0;j--)
		{
			for (k=0;k<m;k++)
			{
				if (length[k]==n-j)
				{
					break;
				}
			}
			if (k<m)
			{
				temp1 = Price[k];
			}
			else
			{
				temp1 = 0;
			}
			for (l=0;l<m;l++)
			{
				if (length[l]==j)
				{
					break;
				}
			}
			if (l<m)
			{
				temp2 = Price[l];
			}
			else
			{
				temp2 = 0;
			}
	        t = temp1 + temp2 ;
	    	if (t>result)
			{
		    	result = t;
 			}

		}
	}
	else if (i>1)
	{
		for (j=n-1;j>i-1;j--)
		{
			for (k=0;k<m;k++)
			{
				if (length[k]==n-j)
				{
					break;
				}
			}
			if (k<m)
			{
				temp1 = Price[k];
			}
			else
			{
				temp1 = 0;
			}
			t = temp1 + function(j,i-1,Price,length,m);
    		if (t>result)
			{
    			result = t;
		 	}
		}
	}
    else if (i==0)
	{
		for (k=0;k<m;k++)
			{
				if (length[k]==n)
				{
					break;
				}
			}
				if (k<m)
				{
					result = Price[k];
				}
				else
				{
					result = 0;
				}
	}
	return result;
}


int main()
{
	int n,m,i,maxPrice=0,temp,*length,*Price;
	scanf("%d%d",&n,&m);
	length = (int*) malloc(m * sizeof (int ));
    Price = (int*) malloc(m * sizeof (int ));
    for(i=0;i<m;i++)
    {
    	scanf("%d",&length[i]);
    }
    for(i=0;i<m;i++)
    {
    	scanf("%d",&Price[i]);
    }
	for(i=0;i<n;i++)
	{
		if(function(n,i,Price,length,m)>maxPrice)
   	{
   		maxPrice = function(n,i,Price,length,m);
   	} 
	}
	printf("%d",maxPrice);
	return 0;
}

			
