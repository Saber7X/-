#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int n, m; 
	cin >> n >> m;
	bool t = 0;
	int cnt = 0;
	for(int i = 1; i <= n; i ++ )
	{
		cnt ++;
		for(int j = 1; j <= m; j ++ )
		{
			if(t == 1)
			{
				if(j % 2 != 0) cout <<"0";
				else cout <<"1";
			}
			if(t == 0)
			{
				if(j % 2 == 0) cout <<"0";
				else cout <<"1";
			}
		}
		cout << endl;
		if(cnt == 2 && t == 0)
		{
			cnt = 0;
			t = 1;
		}
		if(cnt == 2 && t == 1)
		{
			cnt = 0;
			t = 0;
		}
	}
	return 0;
}
