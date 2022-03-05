#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
char s[N];
int q[N];
int a[N];
int  len = 0;
int main()
{
    int n; cin >> n;
    scanf("%s", s + 1);
    q[0] = -0x3f3f3f3f;
    for (int i = 1; i <= n; i ++ )
    {
        a[i] = s[i];
    }
    for (int i = 1; i <= n; i ++ )
    {
    	if (a[i] >= q[len]) q[++len] = a[i];
    	else 
    	{
    		int ff = upper_bound(q + 1, q + 1 + len, a[i]) - q;
    		q[ff] = a[i];
		}
	}
	cout << n - len << endl;
    return 0;
}


