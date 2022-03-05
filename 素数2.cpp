#include<bits/stdc++.h>
using namespace std;
int n;
void find_prime()
{
	//const int maxn=n;
	int prime[10005],pnum=0;
	bool p[10005]={0};
	bool t=0;
	for(int i=2;i<n;i++)//遍历要找的范围,因为要找1到100，而maxn==101，所以用<maxn; 
	{
		if(p[i]==0)//如果是素数 
		{
			prime[pnum]=i;//存入素数数组中 
			if(i%10==1)
			{
				if(t!=0)
				{
					printf(" ");
				}
				printf("%d",i);
				 t=1;
			}
			for(int j=i*i;j<n;j+=i)
			 {
			 	p[j]=1;//标记 
			  } 
		 } 
		 
	 } 
	 if(t==0)
	 {
	 	printf("-1");
	 }
}
int main()
{
	while(scanf("%d",&n)!=EOF)
	{
		find_prime();
		printf("\n");
	}
	
	return 0;
}
