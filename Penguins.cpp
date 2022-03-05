#include<bits/stdc++.h> 
using namespace std;
char a[25][25], b[25][25];
char num[25][25];
int d[25][25];
int xx[4] ={-1, 0, 1, 0};
int yy[4] ={0, 1, 0, -1};

typedef pair<int, int> PII;
PII q[1011];

int bfs()
{
	int hh=0, tt=0;
	memset(d, -1, sizeof d);
	q[0] = {1, 20};
	d[1][20] = 0;
	
	while(hh <= tt)
	{
		auto t = q[hh ++];
		for(int i = 0; i < 4; i ++) 
		{
			int x = t.first + xx[i];
			int y = t.second + yy[i];
			if( x>=1 && x<=20 && y>=1 && y<=20 && num[x][y] == '.' && d[x][y] == -1)
			{
				d[x][y] = d[t.first][t.second] + 1;
                q[++tt] = {x,y};
			}
			
		}
		
	}
	return d[20][20];	
}

int main()
{
	
	for(int i = 1; i <= 20; i ++)
	{
		for(int j = 1; j <= 20; j ++)
		{
			cin >> a[i][j];
		}
		getchar();
		for(int j = 1; j <= 20; j ++)
		{
			cin >> b[i][j];
		}
	}
//	for(int i = 1; i <= 20; i ++)
//	{
//		for(int j = 1; j <= 20; j ++)
//		{
//			cout<< a[i][j];
//		}
//		cout << " ";
//		for(int j = 1; j <= 20; j ++)
//		{
//			cout << b[i][j];
//		}
//		cout <<endl;
//	}
	
	for(int i = 1; i <= 20; i ++ )
	{
		for(int j = 1; j <= 20; j ++ )
		{
			if(a[i][j] == '.' && b[i][20 - j + 1] == '.' )
			{
				num[i][j] = '.';
			}
			else
			{
				num[i][j] = '#';
			}
		}
	}
	
	for(int i = 1; i <= 20; i ++ )
	{
		for(int j = 1; j <= 20; j ++)
		{
			cout << num[i][j];
		}
		cout << endl;
	}
	int ans = bfs();
	for(int i = 1; i <= 20; i ++)
	{
		for(int j = 1; j <= 20; j ++ )
		{
			cout << d[i][j] <<"   ";
		}
		cout <<endl;
	}
	
	cout << ans << endl;
	
	return 0; 
}
