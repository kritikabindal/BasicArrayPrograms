#include<iostream>
using namespace std;
int main()
{
	int a[]={1,2,3,4,5};
	int n=5,d=2;
	//use temp array(timeO(n)  space O(d))
	int temp[d];
	for(int i=0;i<d;i++)
	{
		temp[i]=a[i];
	}
	for(int i=d;i<n;i++)
	{
		a[i-d]=a[i];
	}
	int count=0;
	for(int i=n-d;i<n;i++)
    {
	a[i]=temp[count];
	count++;
    }
    
    for(int j=0;j<n;j++)
    cout<<a[j]<<" ";
    
    return 0;
    
	
}
