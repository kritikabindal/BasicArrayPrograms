#include<stdio.h>
void addition(int a[][10],int b[][10],int m,int n)
{
int c[10][10],i,j;
for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
  {
    c[i][j]=a[i][j]+b[i][j];
   }
}
printf("\n Matrix after addition is ");
for(i=0;i<m;i++)
{ printf("\n");
  for(j=0;j<n;j++)
  printf("  %d",c[i][j]);
}
}  

int main()
{
int a[10][10],b[10][10],i,j,m1,n1,m2,n2;
printf("\n Enter the dimension of 1st matrix ");
scanf("%d%d",&m1,&n1);
printf("\n Enter the dimension of 2nd matrix ");
scanf("%d%d",&m2,&n2);

if(m1==m2 && n1==n2)
{ 
  printf("\n Enter the elements for matrix 1 row wise ");

  for(i=0;i<m1;i++)
  {
    for(j=0;j<n1;j++)
	scanf("%d",&a[i][j]);
  }
  printf("\n Enter the elements for matrix 2 row wise ");

  for(i=0;i<m2;i++)
  {
    for(j=0;j<n2;j++)
	scanf("%d",&b[i][j]);
  }  
printf("\n Matrix 1 is ");
for(i=0;i<m1;i++)
{ printf("\n");
  for(j=0;j<n1;j++)
  printf("  %d",a[i][j]);
}
printf("\n Matrix 2 is ");
for(i=0;i<m2;i++)
{ printf("\n");
  for(j=0;j<n2;j++)
  printf("  %d",b[i][j]);
}
 addition(a,b,m1,n1);
}
else printf("\n Addition is not possible --> dimensions do not match \n");
return 0;
} 

