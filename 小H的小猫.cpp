#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n==1)
	{
		cout<<"Poor Little H!";
	}
	else
	{
		double mina=1000000009.0,minb=1000000009.0;
		double x,y;
		int a=0,b=0;
		for(int i=1;i<=n;i++)
		{
//			cin>>x>>y;
			scanf("%lf %lf",&x,&y);
			if(x==0.0)
			{
				a=1;
				if(y<0)
				{
					y*=-1.0;
				}
				if(y<mina)
				{
					mina=y;
				}
				//mina=min(fabs(mina),y);
			}
			if(y==0.0)
			{
				b=1;
				if(x<0)
				{
					x*=-1.0;
				}
				if(x<minb)
				{
					minb=x;
				}
				//minb=min(fabs(mina),x);
			}
		}
		//cout<<x<<" "<<y<<endl;
		if(a==1&&b==1)
		{
			printf("%.10f",sqrt(mina*mina+minb*minb));
		}
		else
		{
			cout<<"Poor Little H!";
		}
	}
	
	return 0;
}
