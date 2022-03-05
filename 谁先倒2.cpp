#include<bits/stdc++.h>
using namespace std;
int main()
{
	int	e,f;//甲乙的酒量
	int a[102],b[102],c[102],d[102];
	int  n;//n组划拳记录 
	scanf("%d %d",&e,&f);
	scanf("%d",&n);
	int cnt1=0;int cnt2=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d %d %d %d",&a[i],&b[i],&c[i],&d[i]);
		
	 } 
	 for(int i=0;i<n;i++)
	 {
	 	if(b[i]==a[i]+c[i]&&d[i]==a[i]+c[i])//判断平局的情况 
	 	{
	 		continue;
		 }
		 else if(b[i]==a[i]+c[i])
		{
			cnt1++;
			e--;
		}
		else if(d[i]==a[i]+c[i])
		{
			cnt2++;
			f--;
		}
		if(e<0)
		{
			printf("A\n%d",cnt2);
			break;
		}
		else if(f<0)
		{
			printf("B\n%d",cnt1);
			break;
		}
	 }
	return 0;
}
