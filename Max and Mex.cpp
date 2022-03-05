//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <map>
//using namespace std;
//int main()
//{
//    int T;
//    scanf("%d", &T);;
//    while (T -- )
//    {
//        vector<int> num;
//        int n, k,  cnt = 0;
//        map<int, int> res;
//        scanf("%d%d", &n, &k);
//        for (int i = 1; i <= n; i ++ )
//        {
//            int x;
//            num.push_back(x);
//            if(res[num[i]] ==0)
//            {
//                cnt ++;
//            }
//            res[ num[ i]] ++;
//        }
//        num[0] = 0;
//        sort(num +1, num + 1 + n);
//        while (k -- )
//        {
//            int mex,max;
//            max = num[n];
//            bool t = true;
//            if(num[1]!=0)
//            {
//                mex = 0;
//                t = false;
//            }
//            for(int i = 1; i <= n; i ++ )
//            {
//                if(num[i] - num[i - 1] > 1 && t )
//                {
//                    mex = num[i - 1] + 1;
//                    t = false;
//                }
//            }
//            if(t == true)
//            {
//            	mex = num[n] + 1;
//			}
//			if(mex > max)
//			{
//			    max = mex;
//			}
//            num[++n] = (mex + max)/2;
//            if(res[num[n]] == 0)
//            {
//                cnt ++;
//            }
//            res[num[n]]++;
//        }
//        printf("%d\n", cnt); 
//    }
//    return 0;
//}
#include<iostream>
#include<map>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int n, maxn ,mex, k;
	int T;
	scanf("%d", &T);
	while(T -- )
	{
		scanf("%d %d", &n, &k);
		int a[200005]={-1};
		map<int , int> res;
		for(int i = 1; i <= n ; i ++)
		{
			cin >> a[i];
			res[ a[i] ] ++ ; 
		}
		sort(a + 1, a + 1 + n);
		bool s= false;
		for(int i = 1; i <= n; i ++ )
		{
			if(a[i] - a[i - 1] > 1 )
			{
				s=true;
				mex = a[i-1] +1;
				break;
			}
		}
		if(!s)
		{
			mex = a[n] + 1;
		}
		maxn =a[n];
		
		int ff = (maxn + mex + 1) /2;
		if(res[ff] != 0 || k == 0 ) 
		{
			printf("%d\n", n);
		}
		else if(ff == mex)
		{
			printf("%d\n", n + k);
		}
		else if(res[ff] == 0)
		{
			printf("%d\n", n + 1);
		}
		
	}
	return 0;
}
