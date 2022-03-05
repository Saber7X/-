//借书还书都在当天，只有一本书被借过，还时借书人次++，再计算时间，如果没有借只有还，则不算 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int res[1000]={0};//借书情况
		int time[1000]={0};
		int cnt=0;//人数
		int sum=0;
		int a,b,h,m;//人数，状态，时，分
		while(scanf("%d %c %d:%d",&a,&b,&h,&m)!=EOF)
		{
			if(a==0)
			{
				break;
			}
			if(b=='S')
			{
				res[a]=1;
				time[a]=60*h+m;
			}
			if(b=='E'&&res[a]==1)
			{
				res[a]=0;
				cnt++;
				sum=sum+h*60+m-time[a];
			}
		 }
		 if(cnt==0)
		 {
		 	cout<<"0 0"<<endl;
		 }
		 else
		 {
		 	cout<<cnt<<" ";
		 	double sum1=(double)(sum/cnt);
		 	printf("%d\n",(int)(1.0*sum/cnt+0.5));//保留到个位四舍五入 
		}
	}
	return 0;
}
