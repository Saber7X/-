#include<bits/stdc++.h>
using namespace std;

int main()
{
	bool cnt[10]={0};
	int num[4][4];
	int t=1;
	int x,y;
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++)
		{
			cin>>num[i][j];
			if(num[i][j]!=0)
			{
				cnt[num[i][j]]=1;
			}
			else
			{
				x=i;
				y=j;
			}
		}
	}	
	for(int i=1;i<=9;i++)
	{
		if(cnt[i]==0)
		{
			num[x][y]=i;
		}
	}
	int sum=0;
	for(int i=0;i<3;i++)
	{
		int a,b;
		cin>>a>>b;
		cout<<num[a][b]<<endl;
	}
	int c=0;
	cin>>c;
	if(c>=1&&c<=3){
		sum=num[c][1]+num[c][2]+num[c][3];
	}
	if(c>=4&&c<=6){
		sum=num[1][c-3]+num[2][c-3]+num[3][c-3];
	}
	if(c==8){
		sum=num[1][3]+num[2][2]+num[3][1];
	}
	if(c==7){
		sum=num[1][1]+num[2][2]+num[3][3];
	}
	if(sum==6) cout<<"10000";
	if(sum==7||sum==19) cout<<"36";
	if(sum==8) cout<<"720";
	if(sum==9) cout<<"360";
	if(sum==10) cout<<"80";
	if(sum==11) cout<<"252";
	if(sum==12) cout<<"108";
	if(sum==13||sum==16) cout<<"72";
	if(sum==14) cout<<"54";
	if(sum==15||sum==17) cout<<"180";
	if(sum==18) cout<<"119";
	if(sum==20) cout<<"306";
	if(sum==21) cout<<"1080";
	if(sum==22) cout<<"144";
	if(sum==23) cout<<"1800";
	if(sum==24) cout<<"3600";
	return 0;
}
	/*if(n==1)
	{
		
		sum=num[1][1]+num[1][2]+num[1][3];
	}
	else if(n==2)
	{
		sum=num[2][1]+num[2][2]+num[2][3];
	}
	else if(n==3)
	{
		sum=num[3][1]+num[3][2]+num[3][3];
	}
	else if(n==4)
	{
		sum=num[1][1]+num[2][1]+num[3][1];
	}
	else if(n==5)
	{
		sum=num[1][2]+num[2][2]+num[3][2];
	}
	else if(n==6)
	{
		sum=num[1][3]+num[2][3]+num[3][3];
	}
	else if(n==7)
	{
		sum=num[1][1]+num[2][2]+num[3][3];
	}
	else if(n==8)
	{
		sum=num[1][3]+num[2][2]+num[3][1];
	}*/
