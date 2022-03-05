#include<bits/stdc++.h> 
using namespace std;
struct name{
	string a;
	double b,c,d,e;
	double sum;
}num[510];
bool cmp(name a,name b)
{
	if(a.sum==b.sum)
	{
		return a.a<b.a;
	}
	return a.sum>b.sum;
}

int main()
{
	int n;
	double flag1,flag2,flag3,flag4;
	
	flag1=710.0*0.35;//25
	flag2=710.0*0.35;//30
	flag3=710.0*0.15;
	cin>>n;
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		double x,y,l,k;
		cin>>num[i].a>>l>>x>>y>>k;
		num[i].b=flag3*(l/100.0);
		num[i].c=flag1*(x/25.0);
		num[i].d=flag2*(y/30.0);
		num[i].c=flag3*(k/100.0);
		num[i].sum=num[i].b+num[i].c+num[i].d+num[i].e;
		if(num[i].sum>=425)
		{
			cnt++;
		}
	}
	sort(num,num+n,cmp);
	cout<<cnt<<endl;
	for(int i=0;i<n;i++)
	{
		if((int)(num[i].sum*10000)%10000!=0)
		{
			num[i].sum+=1;
		}
		cout<<num[i].a<<" ";
		printf("%d\n",(int)num[i].sum);
	}
	return 0;
}
