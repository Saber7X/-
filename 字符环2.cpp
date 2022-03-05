#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	cin>>a>>b;
	a=a+a;
	b=b+b;
	int lena=a.length();
	int lenb=b.length();
	
	int cnt=0;
	int maxn=0;
	int minn=min(lena,lenb);
	for(int i=0;i<lena;i++)
	{
		for(int j=0;j<lenb;j++)
		{
			if(a[i]!=b[j])
			{
				continue;
			}
			else
			{
				cnt=1;
				int x=i+1;
				int y=j+1;
				while(1)
				{
					if(a[x]==b[y])
					{
						x++;
						y++;
						cnt++;
						
					}
					else
					{
						break;
					 }
					maxn=max(maxn,cnt);
				}
				
			}
			
		}
	}
	if(maxn>=lena/2&&maxn>=lenb/2)
	{
		maxn=min(lena/2,lenb/2);
	}
	cout<<maxn;
	return 0;
}
