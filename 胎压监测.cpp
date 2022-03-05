#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num[5],n,m;
	cin>>num[1]>>num[2]>>num[3]>>num[4]>>n>>m;
	int ans[100];
	for(int i=1;i<=4;i++)
	{
		ans[i]=num[i];
	}
	sort(num,num+5);
	/*for(int i=1;i<=4;i++)
	{
		cout<<num[i]<<" ";
	}
	cout<<endl;*/
	int b=num[4];
	bool t=0;
	int a=0;
	for(int i=1;i<=4;i++)
	{
		int x=b-ans[i];
		//cout<<x<<endl;
		if(x>m||ans[i]<n)
		{
			if(t==1)
			{
				t=2;
				cout<<"Warning: please check all the tires!";
				return 0;
			}
			a=i;
			t=1;
			
		}
	}
	
	if(t==1)
	{
		cout<<"Warning: please check #"<<a<<"!";
	}if(t==0)
	{
		cout<<"Normal";
	}
	return 0;
}
