#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b;
		int num[10000]={0},cnt=1;
		num[0]=1;
		
		cin>>n>>a>>b;
		for(int i=0;i<1000000;i++)
		{
			num[cnt++]=num[i]*a;
			if(num[cnt-1]==n)
			{
				cout<<"Yes"<<endl;
				break;
			 } 
			num[cnt++]=num[i]+b;
			if(num[cnt-1]==n)
			{
				cout<<"Yes"<<endl;
				break;
			 } 
			 if(num[cnt-2]>n&&num[cnt-1]>n)
			 {
			 	cout<<"No"<<endl;
			 	break;
			 }
			
		}
	}
	return 0;
}
