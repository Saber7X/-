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

//��Ϊÿ�ֹ����ܻ�õľ��鶼����ͬ�ģ����������ͬһ��ȡmax����û�б�Ҫ����Ϊ������һ���϶��Ȳ�������һ�������Ծͺ���һ��ıȽϣ������һ��������õľ��鶼����һ��С�����Ծ���Ҫôȫȡ��һ��ģ�һ����һ����Ҫôȫ������һ���ֵ����Ϊ��һ����ֵ��ȥ��һ������ļ���һ������Ľ���϶���ԭ��ȫ������Ľ��С�������Ǻ���һ��ı�
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
	        	
	        		if(f[i][cc] >= n)//�����Ϊʲô�����ֻ������������� 
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
