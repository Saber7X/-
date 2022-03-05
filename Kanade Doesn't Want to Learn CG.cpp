#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		
		int a,b,c;
		cin>>a>>b>>c;
		
		long long int x0,x1,y0,y1,y2;
		cin>>x0>>x1>>y0>>y1>>y2;
		
		int p[20];
		p[0]=x0,p[1]=y0,p[2]=x1,p[3]=y0,p[4]=x1,p[5]=y1,p[6]=x1,p[7]=y2;
		p[8]=2*p[2]-p[0];
		p[9]=p[1];
		
		long long int  ct=p[0]*p[0]*a+b*p[0]+c;
		long long int ct1=p[2]*p[2]*a+p[2]*b+c;
		long long int ct2=p[8]*p[8]*a+b*p[8]+c;
		
		if(ct<p[1]){cout<<"No"<<endl;continue;}
		else
		{
			int ccc = 1;
			switch(ct)
			{
				case p[1]:cout<<"No"<<endl;ccc=0;break; 
			}
			if (ccc == 0) continue;
			
			ct=p[6]*p[6]*a+b*p[6]+c;
			if(ct>p[7]){cout<<"No"<<endl;continue;}
			
			switch(ct1)
			{
				case p[3]:cout<<"No"<<endl;ccc=0;break; 
			}
			if (ccc == 0) continue;
			
			if(ct2>p[9]){cout<<"No"<<endl;continue;}
			
			switch(ct2)
			{
				case p[9]: cout<<"No"<<endl;ccc = 0;break;
			}
			if (ccc == 0) continue;
		}		
		cout<<"Yes"<<endl;	
	}
	return 0;
}

