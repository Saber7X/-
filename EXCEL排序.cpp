#include<bits/stdc++.h>
using namespace std;
struct name{
	int a;//学号 
	string b;//姓名 
	int c;//成绩 
}num[100006];
bool cmp1(name a,name b)//按学号排 
{
	return a.a<b.a ;
}

bool cmp2(name a,name b)//按名字排
{
	return a.b<b.b;  
} 

bool cmp3(name a,name b)//按成绩排
{
	return a.c<b.c; 
} 

int main()
{
	int n,c;int cnt=0;
	while(scanf("%d %d",&n,&c)!=EOF)
	{
		cnt++;
		if(n==0)
		{
			//printf("\n");
			break;
		}
		for(int i=0;i<n;i++)
		{
			cin>>num[i].a ;
			getchar();
			cin>>num[i].b;
			getchar();
			cin>>num[i].c ;
		}
		if(c==1)
		{
			sort(num,num+n,cmp1);//按学号排 
		}
		if(c==2)
		{
			sort(num,num+n,cmp2);//按名字排 
			for(int i=0;i<n-1;i++)
			{
				if(num[i].b==num[i+1].b||num[i].c==num[i+1].c )
				{
					if(num[i].a>num[i+1].a)
					{
						int temp=num[i+1].a;
						num[i+1].a=num[i].a;
						num[i].a =temp;
						
						temp=num[i+1].c;
						num[i+1].c=num[i].c;
						num[i].c =temp;
						
						string h=num[i+1].b;
						num[i+1].b=num[i].b;
						num[i].b =h;
					}
				}
			}
		}
		if(c==3)
		{
			sort(num,num+n,cmp3); 
			for(int i=0;i<n-1;i++)
			{
			
				if(num[i].b==num[i+1].b||num[i].c==num[i+1].c )
				{
					int temp=num[i+1].a;
						num[i+1].a=num[i].a;
						num[i].a =temp;
						temp=num[i+1].c;
						num[i+1].c=num[i].c;
						num[i].c =temp;
						string h=num[i+1].b;
						num[i+1].b=num[i].b;
						num[i].b =h;
				}
			}
		}
		cout<<"Case "<<cnt<<":"<<"\n";
		for(int i=0;i<n;i++)
		{
			printf("%06d ",num[i].a);
			cout<<num[i].b<<" ";
			printf("%d\n",num[i].c );
		}
	}
	return 0;
}
