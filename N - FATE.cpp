#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    int n, m, s, kk;
    while(cin >> n >> m >> kk >> s)
    {
        int f[110][110] = {0};
        int a, b;
        int minn = 0x3f3f3f3f;
        for (int i = 1; i <= kk; i ++ )
        {
        	cin>> a >> b; 
        	for(int j = 1; j <= s; j ++)
			{
				for(int k = b; k <= m ; k ++ )
				{

//因为每种怪物能获得的经验都是相同的，所以如果在同一层取max，就没有必要，因为加上下一个肯定比不加上这一个大，所以就和上一层的比较，如果这一种整个获得的经验都比上一个小，所以就是要么全取这一层的，一个加一个。要么全都用上一层的值，因为上一个的值大，去掉一个上面的加上一个下面的结果肯定比原来全用上面的结果小，所以是和上一层的比
					f[j][k] = max(f[j - 1][k - b] + a, f[j][k]); 
				}
			} 
        }
        int cc = 0;
        int gg = 1;
        for(int i = 1; i <= s; i ++)
        {
        	for(cc = 0; cc <= m; cc ++)
	        {
	        	
	        		if(f[i][cc] >= n)//不理解为什么是最大只数的情况下来比 
	        		{
	        			cout <<m- cc <<endl;
	        			gg = 0;
	        			break;
					}
			}
			if(gg == 0)
			{
				break;
			}
		}
        
		if(gg== 1)
		{
			cout << "-1" <<endl;
		}
    }
    return 0;
}
