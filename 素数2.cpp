#include<bits/stdc++.h>
using namespace std;
int n;
void find_prime()
{
	//const int maxn=n;
	int prime[10005],pnum=0;
	bool p[10005]={0};
	bool t=0;
	for(int i=2;i<n;i++)//����Ҫ�ҵķ�Χ,��ΪҪ��1��100����maxn==101��������<maxn; 
	{
		if(p[i]==0)//��������� 
		{
			prime[pnum]=i;//�������������� 
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
			 	p[j]=1;//��� 
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
