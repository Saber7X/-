#include<bits/stdc++.h>
using namespace std; 
int main()
{
	int a[6]={1,8,7,9,10,3};
	int n=6; 
	for(int i=1;i<n;i++)
	{
		int k=i;
		int b=a[i];
		while(k>0&&a[k-1]>b)
		{
			
			a[k]=a[k-1];
			
			k--;
		}
		a[k]=b;
		
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
