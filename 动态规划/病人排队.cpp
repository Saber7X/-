#include<iostream>
#include<algorithm>
using namespace std;
struct name{
	
	char a[20];//ID
	int b;//年龄 
	int c;//看病顺序 
}num[105];

bool cmp(name a,name b)
{
	if(a.b>=60&&b.b>=60)//两个都是老年人的情况 
	{
		if(a.b!=b.b)//年龄不同按年龄从大到小排序 
		{
			return a.b>b.b;
		}
		else if(a.b==b.b)//年龄相同按看病顺序先后排序 
		{
			return a.c<b.c;
		}
	
	}
	else if(a.b>=60&&b.b<60)//前一个是年轻人，后一个不是 
	{
		return 1;//1即false,代表前一个排在前面 
	}
	else if(a.b<60&&b.b>=60)//前一个是老年人，后一个不是 
	{
		return 0;//0即true,代表后一个排在前面 
	}
	else//所有年轻人按来看病的先后顺序排 
	{
		return a.c<b.c;
	}
	
	
	
}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%s %d",&num[i].a,&num[i].b);
		num[i].c=i; 
	}
	sort(num,num+n,cmp);
	for(int i=0;i<n;i++)
	{
		printf("%s\n",num[i].a);
	}
	return 0;
}
