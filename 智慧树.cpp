#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int num[10005]={0};
	int cnt=1;
	for(int i=1;i<=7721;i++)
	{
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				int c=sqrt(i*j);
				if(c*c==i*j)
				{
					num[cnt++]=i;
				
					cout<<cnt-1<<":  "<<"x:"<<num[cnt-1]<<"  y:"<<j<<endl; 
					break;	
				}
			}
		}
	}	
	return 0;
}				
			

	
	
