#include<bits/stdc++.h>
using namespace std;
struct name{
	int tou;
	int wei;
}num[105];
bool cmp(name a,name b)
{
	return a. <a.wei ; 
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
		{
			break;
		}
		for(int i=0;i<n;i++)
		{
			scanf("%d %d",&num[i].tou,&num[i].wei );
		}
		printf("\n");
		sort(num,num+n,cmp);
		for(int i=0;i<n;i++)
		{
			printf("%d %d\n",num[i].tou ,num[i].wei );
		}
		
	}
	return 0;
}
