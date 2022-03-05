#include<bits/stdc++.h>//函数版 
using namespace std;
int dao(int a)
{
	int sum=0;
	if(a%10==0)
		{
			sum+=a/10;
		}
		else if(a<10)
		{
			sum+=1;
		}
		else if(a%10!=0)
		{
			sum+=a/10+1;
		}
	return sum;
 } 
int main()
{
	int c;//几组样例
	scanf("%d",&c);
	int n;//总人数 
	int ans[1001];
	int cnt=0;
	for(int i=0;i<c;i++)
	{
		
		int sum=0;
		scanf("%d",&n);
		int a=n/2;
		int b=(n-a)*2/3;
		int c=n-a-b;
		ans[cnt]=dao(a)+dao(b)+dao(c);
		cnt++;
	} 
	for(int i=0;i<cnt;i++)
	{
		printf("%d\n",ans[i]);
	}
	return 0;
}
