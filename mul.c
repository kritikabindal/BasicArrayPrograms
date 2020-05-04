#include<stdio.h>
void multiply(int a[][10],int b[][10],int p,int q,int r)
{
int c[10][10],i,j,k,sum;
for(i=0;i<p;i++)
{  
  for(j=0;j<r;j++)
  {  sum=0;
    for(k=0;k<q;k++)
{
    sum+=(a[i][k]*b[k][j]);
   }
   c[i][j]=sum;
   }
}
printf("\n Matrix after multiplication is ");
for(i=0;i<p;i++)
{ printf("\n");
  for(j=0;j<k;j++)
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

if(n1==m2)
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
 multiply(a,b,m1,n1,n2);
}
else printf("\n Multiplication is not possible --> n1 and m2 do not match ");

return 0;
} 


