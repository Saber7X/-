#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	
	int num[1005]={0};
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
		sum+=num[i];
	}
	sort(num,num+n);
	int summ=0;
	int cha=10000;
	int a;
	int b=0;
	for(int i=n-1;i>=0;i--)
	{
		b+=num[i];
		int c=sum-b;
		int aa=cha;
		cha=abs(a-b);
		
		if(cha>aa)
		{
			b-=num[i];
			b+=num[i-1];
			a+=num[i];
			a-=num[i-1];
			break;
		}
	}
	cout<<a<<" "<<b<<" "<<max(a,b) ;
	return 0;
}
