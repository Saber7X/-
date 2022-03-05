#include<bits/stdc++.h>
using namespace std;
const int N = 2005;
int main()
{
    int n, m, g[N], ans = 0, cnt = 0;
    cin >> n >> m;
    for(int i = 1; i <= n + 1; i ++)
    {
    	cnt = 0;
        string s;
        cin >> s;
        for(int j = 0; j < s.length(); j ++ )
        {
        	if(s[j] == '0')
        	{
        		cnt ++;
			}
			if(s[j] == '1')
			{
				cnt = 0;
			}
			if(cnt >= m)
			{
				ans ++;
			}
			
			//cout << cnt <<" ";
		}
    }
    cout << ans<<endl;
    return 0;
}
