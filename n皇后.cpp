#include<bits/stdc++.h>
using namespace std;
char num[100][100];
int n;
int ss(int i,int j)
{
	int t=0;
				
	int a=i;
	int b=j;
	while(t==0)
	{
		if(a<=0||a>n||b<=0||b>n)
		{
			break;
		}
		
		if(num[a][b]=='Q')
		{

			return 1;
		}
		a++;
		
	}
	
	a=i;
	b=j;
	while(t==0)
	{
		if(a<=0||a>n||b<=0||b>n)
		{
			break;
		}
		if(num[a][b]=='Q')
		{
			return 1;
			break;
		}
		a--;
	}
	
	a=i;
	b=j;
	while(t==0)
	{
		if(a<=0||a>n||b<=0||b>n)
		{
			break;
		}
		if(num[a][b]=='Q')
		{
			return 1;
		}
		b++;
	}
	
	a=i;
	b=j;
	while(t==0)
	{
		if(a<=0||a>n||b<=0||b>n)
		{
			break;
		}
		if(num[a][b]=='Q')
		{
			return 1;
			break;
		}
		b--;
	}
	
	a=i;
	b=j;
	while(t==0)
	{
		if(a<=0||a>n||b<=0||b>n)
		{
			break;
		}
		if(num[a][b]=='Q')
		{
			return 1;
			break;
		}
		a++;
		b++;
	}
	
	a=i;
	b=j;
	while(t==0)
	{
		if(a<=0||a>n||b<=0||b>n)
		{
			break;
		}
		if(num[a][b]=='Q')
		{
			return 1;
			break;
		}
		a--;
		b--;
	}
	
	a=i;
	b=j;
	while(t==0)
	{
		if(a<=0||a>n||b<=0||b>n)
		{
			break;
		}
		if(num[a][b]=='Q')
		{
			return 1;
			break;
		}
		a++;
		b--;
	}
	
	a=i;
	b=j;
	while(t==0)
	{
		if(a<=0||a>n||b<=0||b>n)
		{
			break;
		}
		if(num[a][b]=='Q')
		{
			return 1;
			break;
		}
		a--;
		b++;
	}
	return 0;
}


void dfs(int x,int y,int u)
{
	if(y>n)
	{
		x+=1;
		y=1;
	}
	if(u==0)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cout<<num[i][j];
			}
			cout<<endl;
		}
		return;
	}
	

	  
	if(ss(x,y)==0)//没有别的皇后，可以放
	{
		num[x][y]='Q';
		dfs(x,y+1,u-1);
		num[x][y]='.'; 
	 } 
	 
	 	dfs(x,y+1,u); 
	
	
}






int main()
{
	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			num[i][j]='.';
		}
	}
	dfs(1,1,n);
	return 0;
}
