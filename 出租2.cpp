#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	int a[12],b[12],d[12];
	int i;
	char c[12];
	cin>>c;
	int n=0,q=0;
	while(n<11)
	{
		int sum=c[n]-'0';
		a[sum]=1;
		n++;
	}
	for(i=0;i<11;i++)
	{
		if(a[i]==1)
		{
			b[q]=i;
			q++;
		}
	}
	sort(b,b+q,cmp);
	int l=q;
	for(i=0;i<11;i++)
	{
		int s=c[i]-'0';
		for(int j=0;j<l;j++)
		{
			if(s==b[j])
			{
				d[i]=j;
				break;
			}
		}
	}
	cout<<"int[] arr = new int[]{";
	for(int i=0;i<l;i++)
	{
		if(i!=0)
		{
			cout<<",";
		}
		cout<<b[i];
	}
	cout<<"};\nint[] index = new int[]{";
	for(int i=0;i<11;i++)
	{
		if(i!=0)
		{
			cout<<",";
		}
		cout<<d[i];
	}
	cout<<"};";
	return 0; 
}
