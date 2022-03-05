#include<bits/stdc++.h> 
using namespace std;

int n, m, f[1005][1005];
char a[1005][1005];

int solved(char a[], char b[])
{
	int lena = strlen (a + 1);
	int lenb = strlen (b + 1);
	
	for(int i = 0; i <= lena; i ++ )
	{
		f[i][0] = i;
	}
	for(int i = 0; i <= lenb; i ++ )
	{
		f[0][i] = i;
	}
	
	for(int i = 1; i <= lena; i ++ )
	{
		for(int j = 1; j <= lenb; j ++ )
		{
			f[i][j] = min(f[i - 1][j] + 1, f[i][j - 1] + 1);
	
			if(a[i] == b[j])
			{
				f[i][j] = min(f[i - 1][j - 1], f[i][j]);
			} 
			else
			{
				f[i][j] = min(f[i - 1][j - 1] + 1, f[i][j]);
			}
		}
	}
	return f[lena][lenb];
} 
int main()
{
	
	cin >> n >> m;
	
	for(int i = 1; i <= n; i ++ )
	{
		scanf("%s", a[i] + 1);
	}
	while(m -- )
	{
		int flag = 0, ans = 0;
		char b[1005];
		
		scanf("%s%d", b + 1, &flag);
		
		for(int i = 1; i <= n; i ++ )
		{
			if(solved(a[i], b) <= flag )
			{
				ans ++ ;
			}	
		}
		cout << ans <<endl;
	}
	return 0;
}
