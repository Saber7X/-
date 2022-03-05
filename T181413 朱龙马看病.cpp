//#include<bits/stdc++.h>
//using namespace std;
//struct name{
//	int age;
//	int start;
//	int end;
//}num[10005];
//bool cmp(name a,name b)
//{
//	if(a.h==b.h&&a.m!=b.m )
//	{
//		return a.m<b.m;
//	}
//	if(a.h==b.h&&a.m==b.m)
//	{
//		if(b.age>=25&&b.age<=45&&a.age<25&&a.age>45)
//		{
//			if(a.age>b.age)
//			{
//				return b.age<a.age;
//			}
//			
//		}
//		else
//		{
//			return a.age>b.age;
//		}
//	}
//	return a.h<b.h;
//}
//int main()
//{
//	int n;
//	int hh,mm;
//	cin>>n;
//	for(int i=0;i<n;i++)
//	{
//		int a,b;
//		cin>>num[i].age>>a>>b;
//		
//	}
//	sort(num,num+n,cmp);
//	for(int i=0;i<n;i++)
//	{
//		cout<<num[i].age<<" "<<num[i].h<<" "<<" "<<num[i].m<<endl;
//	}
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;
struct name{
	int age;
	int start;
	int end;
}num[10005];
bool cmp(name a,name b)
{
	return a.h<b.h;
}
int main()
{
	int n;
	int hh=0,mm=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>num[i].age>>a>>b;
		num[i].start=a*60+b*60;
		if(num[i].age>=25&&num[i].age<=45)
		{
			num[i].end=num[i].start+60;
		}
		else
		{
			num[i].end=num[i].start+90;
		}
		
	}
	sort(num,num+n,cmp);
	for(int i=0;i<n;i++)
	{
		if(num[i].age<=25&&num[i].)
	}
	return 0;
}
