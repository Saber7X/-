// 思路：1、先求出n个结点中取出三个结点 有多少种方法 C(n,3)的组合；
// 	2、在找出三个点不能组成三角形的情况；有斜率相等和不存在斜率两种情况；
// 	完整代码如下：
#include<iostream>
#include <vector>
#include <assert.h>
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5+10;
struct node//点的坐标；
{
	int x;
	int y;
}a[N];
signed main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i].x >> a[i].y;
	int result=0;
    if (n <= 2)
	{
        result=0;
    }
	else
    {
        int number1 = n*(n - 1)*(n - 2) / 6;//从n个点中取三个点有多少种取法；
        int counts = 0;//求出不能组成三角形的情况；1、斜率相等；2、斜率不存在
        for (int i = 0; i < n;i++)
        {
        	
            for (int j = i + 1; j < n;j++)
            {
                for (int k = j + 1; k < n; k++)
                {
//                	cout << a[k].y - a[j].y << " " << a[k].x - a[j].x << " " << a[j].y - a[i].y << " " << a[j].x - a[i].x << endl;
					
                    if ((a[k].y - a[j].y) / (a[k].x - a[j].x) == (a[j].y - a[i].y) / (a[j].x - a[i].x))
                        counts++;
                    if (a[k].x == a[j].x == a[i].x)
                        counts++;
                    cout<<counts<<endl;
                }
            }
        }
        cout << result << endl;
        result=number1 - counts;//两者之差就是三角形的个数；
    }
	cout << result << endl;
}

