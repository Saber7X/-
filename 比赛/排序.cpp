#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10]={10,9,8,7,6,5,4,3,2,1};
	for(int i=0;i<10;i++)
	{
		int k=i;
		for(int j=i;j<10;j++)
		{
			if(a[k]<a[j])
			{
				k=j;
			}
		}
		int b=a[k];
		a[k]=a[i];
		a[i]=b;
		printf("%d",a[i]);
	}
	
	return 0;
}
