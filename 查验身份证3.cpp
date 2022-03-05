#include<bits/stdc++.h>
using namespace std;
int quanzhong[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char m[11]={'1','0','X','9','8','7','6','5','4','3','2'};
char ans[1000];
struct name{
	string a;
}num[101];
int main()
{
	//string a;
	int n;
	bool t=0;
	scanf("%d",&n);
	bool s[n]={0};
	for(int i=0;i<n;i++)
	{
		cin>>num[i].a;
		int sum=0;
		for(int j=0;j<17;j++)
		{
			if(num[i].a[j]>'9'||num[i].a[j]<'0')
			{
				t=1;
				s[i]=1;
				break;
			}
			sum=sum+(num[i].a[j]-'0')*quanzhong[j];
		}
		if(s[i]==1)
		{
			continue;
		}
		sum%=11;
		if(num[i].a[17]!=m[sum])
		{
			t=1;
			s[i]=1;
		}
		
	}
	if(t==0)
	{
		printf("All passed");
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(s[i]==1)
			{
				cout<<num[i].a<<endl;
			}
		}
	}
	return 0;
}
