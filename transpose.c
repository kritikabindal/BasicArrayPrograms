#include<stdio.h>
void trans(int m[][10],int p,int q)
{
int t[10][10],i,j;

printf("\nMatrix A is ");
for(i=0;i<p;i++)
{ printf("\n");
  for(j=0;j<q;j++)
  printf("   %d",m[i][j]);
}

for(i=0;i<p;i++)
for(j=0;j<q;j++)
t[j][i]=m[i][j];

printf("\n Transpose of matrix A is ");
for(i=0;i<q;i++)
{ printf("\n");
  for(j=0;j<p;j++)
  printf("   %d",t[i][j]);
}
}
int main()
{
int m[10][10],i,j,p,q;
printf("\n Enter dimensions of matrix A ");
scanf("%d%d",&p,&q);
printf("\n Enter elements of matrix A");
for(i=0;i<p;i++)
for(j=0;j<q;j++)
scanf("%d",&m[i][j]);

trans(m,p,q);

return 0;
}

