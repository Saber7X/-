#include<iostream>
#include<algorithm>
using namespace std;
struct name{
	
	char a[20];//ID
	int b;//���� 
	int c;//����˳�� 
}num[105];

bool cmp(name a,name b)
{
	if(a.b>=60&&b.b>=60)//�������������˵���� 
	{
		if(a.b!=b.b)//���䲻ͬ������Ӵ�С���� 
		{
			return a.b>b.b;
		}
		else if(a.b==b.b)//������ͬ������˳���Ⱥ����� 
		{
			return a.c<b.c;
		}
	
	}
	else if(a.b>=60&&b.b<60)//ǰһ���������ˣ���һ������ 
	{
		return 1;//1��false,����ǰһ������ǰ�� 
	}
	else if(a.b<60&&b.b>=60)//ǰһ���������ˣ���һ������ 
	{
		return 0;//0��true,�����һ������ǰ�� 
	}
	else//���������˰����������Ⱥ�˳���� 
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
