#include<bits/stdc++.h> 
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int sq=sqrt(n);
	long long int num[4]={0}; 
	for(long long int i=0;i<=n;i++)
	{
		for(long long int j=0;j<=n;j++)
		{
			for(long long int k=0;k<=n;k++)
			{
				double a=sqrt(n*1.0)-sqrt(i*1.0)-sqrt(j*1.0)-sqrt(k*1.0);
				
					if(i*i+j*j+k*k+a*a==n)
					{
						num[0]=i;
						num[1]=j;
						num[2]=k;
						num[3]=a;
						sort(num,num+4);
						for(int i=0;i<4;i++)
						{
							cout<<num[i]<<" ";
						}
						return 0; 
					}
			
			}
		}
	}
	return 0;
}
