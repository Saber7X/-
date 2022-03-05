#include<bits/stdc++.h>
using namespace std;
struct name{
	string s;
	double sum;
}num[10005];
bool cmp(name a,name b)
{
	if(a.sum==b.sum)
	{
		return a.s<b.s;
	}
	return a.sum>b.sum;
}
int main()
{
	int n,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		double a,b,c,d;
		cin>>num[i].s>>a>>b>>c>>d;
		num[i].sum=106.5*(a/100.0)+(b/100.0)*248.5+(c/100.0)*248.5+(d/100.0)*106.5;
		int ll=num[i].sum*10000.0;
		
		if(ll%10000==0)
		{
			num[i].sum=(int)num[i].sum+1;
		}
		else
		{
			num[i].sum=(int)num[i].sum;
		}
		
		if(num[i].sum>=425)
		{
			cnt++;
		}
	}
	/*cout<<cnt<<endl;
	sort(num+1,num+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		cout<<num[i].s<<" "<<num[i].sum<<endl;
	}*/
	return 0;
}

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	double x;
//	while(cin>>x)
//	{
//		cout<<(int)x<<endl;
//	}
//	return 0;
//}
