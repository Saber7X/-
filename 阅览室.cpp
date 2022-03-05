#include<bits/stdc++.h>
using namespace std;
struct name{
	int a[100];//读者
	char b[100];//借/还
	int hh[100];//小时
	int mm[100];//分钟 
}num[11];
int main()
{
	int n;
	cin>>n;
	while(1)
	{
		int i=0;
		int sum=0;//记录时间
		int cnt=0;//记录人数 
		int c=0;
		while(1)
		{
			
			cin>>num[n].a[i];
			if(num[n].a[i]==0)
			{
				break;
			}
			cin>>num[n].b[i];
			scanf("%d:%d",&num[n].hh[i],&num[i].mm[i]); 
			c++;
			i++;
		}
		int len=strlen(num[n].b);
		int cnta=0;
		int cntb=0;
		int res[100]={0};
		for(int j=0;j<c;j++)
		{
			if(num[n].b[j] =='S')
			{
				cnta++;
			}
			if(num[n].b[j] =='E')
			{
				cntb++;
			}
		}
		cnt=min(cnta,cntb);
		cout<<cnt<<" ";
		n--;
		if(n==0)
		{
			break;
		}
	}
	
	return 0;
 } 
