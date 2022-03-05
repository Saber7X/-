#include<bits/stdc++.h>
using  namespace std;
int n;
int prime[20005];
bool res[20005]={0};
int cnt=0;//cnt从0开始存，所以要找第n个的话下标就是n-1; 
void findprime()
{
	for(int i=2;i<=20000;i++) //循环务必从2开始否则会死循环 
	{
		if(res[i]==0)
		{
			prime[cnt]=i;
			cnt++; 
			for(int j=i*i;j<=20000;j+=i)
			{
				res[j]=1;
			}
		}
		
	}
}
int main()
{
	findprime();
	cout<<prime[2018];
	return 0;
}
