#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ans[10][10];
	ans[1][7] = -1;
	ans[2][7] = -1;
	ans[3][7] = -1;
	ans[4][7] = -1;
	ans[5][7] = 6;
	ans[6][7] = -1;
	ans[7][7] = 0;
	
	
	ans[1][6] = -1;
	ans[2][6] = -1;
	ans[3][6] = 1;
	ans[4][6] = 4;
	ans[5][6] = 2;
	ans[6][6] = 0;
	ans[7][6] = 2;
	
	ans[1][5] = -1;
	ans[2][5] = -1;
	ans[3][5] = 4;
	ans[4][5] = 2;
	ans[5][5] = 0;
	ans[6][5] = 3;
	ans[7][5] = 5;
	
	
	ans[1][4] = -1;
	ans[2][4] = -1;
	ans[3][4] = 7;
	ans[4][4] = 0;
	ans[5][4] = 3;
	ans[6][4] = 6;
	ans[7][4] = 7;
	
	
	ans[1][3] = -1;
	ans[2][3] = -1;
	ans[3][3] = 0;
	ans[4][3] = 3;
	ans[5][3] = 1;
	ans[6][3] = 1;
	ans[7][3] = 1;
	
	
	ans[1][2] = -1;
	ans[2][2] = 0;
	ans[3][2] = 1;
	ans[4][2] = 1;
	ans[5][2] = 1;
	ans[6][2] = 1;
	ans[7][2] = 1;
	
	
	ans[1][1] = 0;
	ans[2][1] = 1;
	ans[3][1] = 1;
	ans[4][1] = 2;
	ans[5][1] = 2;
	ans[6][1] = 2;
	ans[7][1] = 2;
	
	int t; cin >> t;
	while (t -- )
	{
		int x, y;
		cin >> x >> y;
		cout << ans[x][y] << endl;
//		cin >> x >> y;
	}
	return 0;
}
