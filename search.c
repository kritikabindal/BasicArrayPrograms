#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter m and n: ");
	scanf("%d",&m);
	scanf("%d",&n);
	int a[m][n];
	int i,j,k,l;
	for( i=0;i<m;i++)
	
	{
		for( j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int s,flag=0;
	printf("\nEnter the element to be searched: ");
	scanf("%d",&s);
	for( k=0;k<m;k++)
	
	{
		for( l=0;l<n;l++)
		{
			if(s==a[k][l])
			{
				flag=1;
			break;
		    }
       }
   }
   if(flag==1)
   printf("\nElement is found");
   else
   printf("\nElement is not found");
   return 0;
	
}
