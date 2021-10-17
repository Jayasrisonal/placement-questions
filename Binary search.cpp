#include<iostream>
using namespace std;
int binary_search(int arr[],int k,int n)
{
	int s=0,e=n-1;
	int mid;
	while(s<=e)
	{
		mid=(s+e)/2;
		if(arr[mid]==k)
		{
			return mid;
		}
		else if(arr[mid]>k)
		{
			e=mid-1;}
		else
		{
			s=mid+1;
		}
		}
	return -1;
	}
int main()
{
int n,arr[1000]={0};
	cin>>n;
	int i;
	for(i=0;i<=n-1;i++)
	{
		cin>>arr[i];
}
cout<<endl<<"Enter the key value ";
int k;
cin>>k;
int found;
found=binary_search(arr,k,n);

if(found!=-1)
{
	cout<<"The key is found at the postion "<<found;
}
else
{
	cout<<"Key is not found";
}
return 0;
}
