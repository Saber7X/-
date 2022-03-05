#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	double a,b,c,flag1,flag2;
	while(t--)
	{
		cin>>a>>b>>c;
		flag1=a;flag2=c/b;
		if(flag1<flag2)//如果A的单价低于B的单价 
		{
			cout<<"1"<<" "<<"-1"<<endl;
			continue;
		}
		if(a<c) cout<<"1"<<" ";//如果a的单价小于B一盒的价格，那么就买1个时在A店买便宜 
		else cout<<"-1"<<" ";
		if(flag1>flag2)//果A的单价高于B的单价 
		{
			cout<<(int)b<<endl; 
		}
		else
		{
			cout<<"-1"<<endl;
		}
		
	}

	return 0;
}
