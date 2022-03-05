#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 200005;

int res[N];
int main()
{
    
    int f[N];
    int n, m;
    
    cin >> n >> m;
	int cnt = n;
    for(int i = 1; i <= m; i ++ )
    {
        int a, b;
        cin >> a >> b;
        if(a > b)
        {
            res[b] +=1;
            if(res[b] == 1)
            {
                cnt --;
            }
        }
        else if(a < b)
        {
            res[a] +=1;
            if(res[a] == 1)
            {
                cnt --;
            }
        }
    }
    int q;
    cin >> q;
    while (q -- )
    {
        int flag;
        cin >> flag;
        if(flag == 1)
        {
            int a, b;
            cin >> a >> b; 
            if(a > b)
            {
                res[b] ++;
                if(res[b] == 1)
                {
                    cnt --;
                }
            }
            if(a < b)
            {
                res[a] ++;
                if(res[a] == 1)
                {
                    cnt --;
                }
            }
        }
        if(flag == 2)
        {
            int a, b;
            cin >> a >> b;
            if(a > b) 
            {
                res[b] --;
                if(res[b] == 0)
                {
                    cnt ++;
                }
            }
            if(a < b) 
            {
                res[a] --;
                if(res[a] == 0)
                {
                    cnt ++;
                }
            }
        }
        if(flag == 3)
        {
            cout << cnt <<endl;
        }
    }
    return 0;
}
