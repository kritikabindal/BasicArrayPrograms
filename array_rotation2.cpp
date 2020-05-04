#include<iostream>
using namespace std;

void leftrotate(int a[5],int n)
{
    int temp=a[0],i;
    for( i=0;i<n-1;i++)
       {
           a[i]=a[i+1];
       }
    a[i]=temp;

}

int main()
{
int a[]={1,2,3,4,5};
//rotate one by one
int n=5,d=2;

for(int i=0;i<d;i++)
  {
      leftrotate(a,n);
  }
for(int j=0;j<n;j++)
    cout<<a[j]<<" ";

return 0;

}
