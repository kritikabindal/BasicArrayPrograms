using namespace std;
#include<iostream>

int count(int *a,int s,int e)
{
    if(e<s)    //when array is not at all rotated
        return 0;
    if(s==e)   //when array contains only 1 element
        return s;
    int mid =(s+e)/2;
    if(mid<e && a[mid]>a[mid+1] )
        return mid+1;
    if(mid>s  && a[mid]<a[mid-1] && a[mid]<a[mid+1])
       return mid;

    if(a[mid]<a[e])
       return count(a, s, mid-1);

	return count(a, mid+1, e);


}
int main()
{
    int a[]={4,5,1,2,3};
    int n=7;
    cout<<count(a,0,n-1);
}
