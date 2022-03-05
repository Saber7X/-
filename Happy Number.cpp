#include<bits/stdc++.h>
//#define int long long
using namespace std;
struct name{
    string s;
}num[11000000];
char add[4]={'0', '2', '3', '6'};
signed main()
{
    int n; 
	cin >> n;
    int cnt = 3,i = 0;
    int sum = 3;
    int begin = 1, end = 0;
    num[1].s = '2',num[2].s = '3', num[3].s = '6';
    cnt = 4;
    if(n >= 1 && n <= 3)
    {
    	cout << num[n].s;
    	return 0;
	}
    while (cnt < n)
    {
        begin = end + 1;
        end = cnt - 1;
        for(i = begin; i <= end; i ++ )
        {
            for(int j = 1; j <= 3; j ++ )
            {
                    num[cnt ++ ].s = num[i].s + add[j];
                     if(cnt > n)
                     {
                         cout << num[n].s;
                         return 0;
                     }   
                
                
            }
        }
        
    }
    return 0;
}
