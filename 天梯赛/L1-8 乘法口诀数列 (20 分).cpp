#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,cnt;
	cin>>a>>b>>cnt;
	int num[2001]={0};
	int i=2;
	num[0]=a;
	num[1]=b;
	int n=0;
	while(1)
	{
		int num1[2001]={0};
		int v=0;
		int x=num[n]*num[n+1];
		//cout<<x<<endl;
		n+=1;
		if(x>=10)
		{
			while(x>0)
			{
				num1[v]=x%10;
				x/=10; 
				v++;
			}
			for(int j=v-1;j>=0;j--)
			{
				num[i]=num1[j];
				i++;
			}
		}
		else
		{
			num[i]=x;
			i++;
		}
		if(i>cnt)
		{
			break;
		}
	}
	if((a==0||b==0)&&cnt>=2)
	{
		cout<<num[0]<<" ";
		cout<<num[1]<<" ";
		for(int i=2;i<cnt;i++)
		{
			cout<<"0";
			if(i!=cnt-1)
			{
				cout<<" ";
			}
		}
	}	
	else if((a==0&&b==0)&&cnt>=2)
	{
		
		for(int i=0;i<cnt;i++)
		{
			cout<<"0";
			if(i!=cnt-1)
			{
				cout<<" ";
			}
		}
	}	
	else
	{
		for(int i=0;i<cnt;i++)
		{
			cout<<num[i];
			if(i!=cnt-1)
			{
				cout<<" ";
			}
		}
	}
	return 0;
}	
		
	
	
	
	
	
	

