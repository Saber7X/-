#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; scanf("%d", &n);
    
    int a[n + 10];
    
    int cnt1 = 0;
    
    for (int i  =  1; i <= n; i ++ )
    {
        int x; scanf("%d", &x);
        int f = 0;//×´Ì¬ 
        for (int j = 0; j < cnt1; j ++ )
        {
            if (a[j] == x)
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            a[cnt1] = x;
            cnt1 ++;
        }
    }
    
    //Ã°ÅÝÅÅÐò 
    for (int i = 0; i < cnt1 - 1; i ++ )
    {
    	for (int j = 0; j < cnt1 - 1 - i; j ++ )
    	{
    		if (a[j] > a[j + 1])
    		{
    			int t = a[j];
    			a[j] = a[j + 1];
    			a[j + 1] = t;
			}
		}
	}
	
	printf("%d\n", cnt1);
    for (int i = 0; i < cnt1; i ++ )
    {
        printf("%d ", a[i]);
    }
    return 0;
}
