//cyclic rotate by one
#include<iostream>
using namespace std;

int main()
{
int a[]={1,2,3,4,5};
int n=5;
int x=a[n-1];
for(int i=n-1;i>0;i--)
{

a[i]=a[i-1];

}
a[0]=x;


for(int j=0;j<n;j++)
    cout<<a[j];
return 0;

}
