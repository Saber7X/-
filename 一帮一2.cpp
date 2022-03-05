#include<bits/stdc++.h>
using namespace std;
struct num{
	int x;//ĞÔ±ğ
	char y[11];//Ãû×Ö 
}put[55];

int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		cin>>put[i].x>>put[i].y;
	}
	for(i=0;i<n/2;i++)
	{
		cout<<put[i].y;
		if(put[i].x==0)
		{
			for(j=n-1;j>=n/2;j--)
			{
				if(put[j].x==1&&put[j].x!=3)				
				{
					cout<<" "<<put[j].y<<endl;
					put[j].x=3;
					break;
				}
			}
		}
		else if(put[i].x ==1)
		{
			for(int j=n-1;j>=n/2;j--)
			{
				if(put[j].x==0&&put[j].x!=3)				
				{
					cout<<" "<<put[j].y<<endl;
					put[j].x=3;
					break;
				}
			}
		}
		//printf("\n");
	}
	return 0;
 } 
