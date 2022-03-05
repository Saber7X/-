#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int num[200086]={0};
	long long int n;
	cin>>n;
	num[1]=1;
	num[2]=1;
	num[3]=1;
	num[4]=1;
	num[5]=2;
	num[6]=1;
	num[7]=1;
	num[8]=3;
	num[9]=3;
	num[10]=1;
	num[11]=1;
	num[12]=4;
	num[13]=6;
	num[14]=4;
	num[15]=1;
	if(n==1)
	{
		cout<<1;
	}
	else if(n==2)
	{
		cout<<5;
	}
	else if(n==3)
	{
		cout<<8;
	}
	else if(n==4)
	{
		cout<<12;
	}
	else if(n==6)
	{
		cout<<13;
	}
	else
	{
		int cnt=6;
		bool t=0;
		int c=0;
		for(long long int i=16;i<=200086;i++)
		{
			long long int flag=0;
			
			while(1)
			{
				
				if(flag==0)
				{
					num[i]=1;
					//cout<<num[i]<<" ";
					i++;
				}
				else if(flag==cnt-1)
				{
					num[i]=1;
					//cout<<num[i]<<" ";
					break;
				}
				else if(flag!=0&&flag!=cnt)
				{
					num[i]=num[i-cnt]+num[i-cnt+1];
					//cout<<num[i]<<" ";
					if(num[i]==n)
					{
						t=1;
						c=i;
						break;
					}
					i++;
				}
				flag++;
				
				if(flag==cnt)
				{
					break;
				}
			}	
			if(t==1)
			{
				cnt++;
				break;
			}
			
		}
		cout<<c;
	}
	
	
	return 0;
}	
			
		
