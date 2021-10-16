//optimized way with o(n2) using cumulativ sum.
#include<iostream>
using namespace std;

int main()
{
	int n;
	int currsum=0,maxsum=0;
	int a[1000];
	cin>>n;

	for(int i=0;i<n;i++)
	{
	cin>>a[i];
	}
	//kadane's Algorithm
	for(int i=0;i<n;i++)	
		{
currsum=currsum+a[i];
if(currsum<0)
{
	currsum=0;
}
maxsum=max(currsum,maxsum);

	}
	
	cout<<"Maximum sum of the subarray is "<<maxsum<<endl;
	
	return 0;
}
