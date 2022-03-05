#include<bits/stdc++.h> 
using namespace std;

struct name{
	int a;//血量
	int b;//耐力 
	int c;//金币
 
}num[1500];
bool cmp(name a,name b)
{
	/*if(a.c==b.c)
	{
		return a.a<b.a;
	}
	else if(a.a==b.a)
	{
		
	}*/
	return a.c>b.c
}

int main()
{
	int n;//怪兽只数
	int h;//总血量
	int s;//总耐力值
	//int f[1000]={0};
	
	cin>>n>>h>>s;
	int q=1;
	for(int i=1;i<=n;i++) 
	{
		
		int x,y,z;
		cin>>x>>y>>z;
		if(x<h)
		{
			if(x+y<h+s)
			{
				num[q].a=x;
				num[q].b=y;
				num[q].c=z;
				q++;
			}
		}
		
		
	 } 
	 //sort(num,n)
	 int sum=0;int t=0;
	 for(int i=1;i<=n;i++)
	 {
	 	int sum1;
	 	sum1=h+s;
	 	for(int j=i;j<=n;j++)
	 	{
	 		if(h>num[j].a&&num[j].a+num[j].b<sum1)
	 		{
	 			sum1=sum1-num[j].a-num[j].b;
	 			
	 			sum+=num[j].c;
	 			
				cout<<sum<<" ";
			 	if(sum>t)
			 	{
			 		
			 		t=sum;
			 		
				 }
			 
			 }
		}
	 	
	 	
		 	
	 	
		 
	 }
	 cout<<t;
	 
}
