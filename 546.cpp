#include<bits/stdc++.h>
using namespace std;
int sum=1;
void dfs(int u)
{
    if(u==0)
    {
        printf("%d",sum);
        return;
    }
    sum*=u;
    dfs(u-1);
}

int main()
{
	int n;
    cin>>n;
    dfs(n);
    return 0;
}
