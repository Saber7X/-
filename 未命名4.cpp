#include<bits/stdc++.h>
using namespace std;
const int N = 350;
struct name{
	int x, y; 
}num[N];

bool cmp(name a, name b)
{
	if (a.x == b.x)
	{
		return a.y < b.y;
	}
	return a.x < b.x;
	
}
int main()
{
	
	int n, cnt = 0;
	cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		cin >> num[i].x >> num[i].y;
	}
	sort(num + 1, num + 1 + n, cmp);
	for (int i = 1; i <= n; i ++ )
	{
		for (int j = i + 1; j <= n; j ++)
		{
			for (int k = j + 1; k <= n; k ++ )
			{
				if (i != j && j != k)
				{
					
//					int x1 = num[j].x - num[i].x;
//					int y1 = num[j].y - num[i].y;
//					int x2 = num[k].x - num[i].x;
//					int y2 = num[k].y - num[i].y;
//					int x3 = num[k].x - num[j].x;
//					int y3 = num[k].y - num[j].y;
//					cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
//					int xx = num[i].x / num[i].y, yy = num[j].x / num[j].y, zz = num[k].x / num[k].y;
//					if (x1 != x2 && x2 != x3 && y1 != y2 && y2 != y3)
//					if (xx == yy && yy == zz )
//					{
//						cout << i << j << k << endl;
//						cnt ++;
//					}
//					else cnt ++ ;
					int x1 = num[i].x, y1 = num[i].y, x2 = num[j].x, y2 = num[j].y, x3 = num[k].x, y3 = num[k].y;
					if (abs((y3 - y1) * (x2 - x1) - (y2 - y1) * (x3 - x1)) != 0)
					{
						cnt ++;
					}
				}
			}
		}
	}
	cout << cnt << endl;
	return 0; 

}
