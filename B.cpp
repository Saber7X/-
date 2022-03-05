#include<bits/stdc++.h>
using namespace std;
int n;
int flag;
bool res[300]={0};
int ans[300];
bool f = 0;
int bbb=0;
int aa=0;
void dfs(int u)
{
    if(u > n)
    {
    	int sum = 0;
		aa++;
        for (int i = 1; i <= n; i ++)
        {
			sum = sum * 10 + ans[i];
			
        }
//        cout << aa << "  " << sum << endl;
		if (sum == flag)
		{
			bbb = aa;
		}
        return;
    }
    for (int i = 1; i <= n; i ++ )
    {
        if(res[i] == 0)
        {
            ans[u] = i;
            res[i] = 1;
            dfs(u + 1);
            res[i]=0;
        }
    }
}
int main()
{
    cin >> n;cin >> flag;
    dfs(1);
    cout << bbb << endl;
    return 0;
}
