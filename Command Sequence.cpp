//#include<bits/stdc++.h> 
//using namespace std;
//
//const int N = 1e5 + 10;
//
//int main()
//{
//	int t; scanf("%d", &t);
//	
//	while (t -- )
//	{
//		int ans = 0;
//		int n;char s[N];
//		
//		scanf("%d", &n);
//		scanf("%s", &s);
//		
//		for(int i = 0; i < n - 1; i ++ )
//		{
//			int a = 0, b = 0, x = 0, y = 0;
//		
//			for(int j = i; j < n; j ++ )
//			{
//				if(s[j] == 'U') a ++;
//				if(s[j] == 'D') b ++;
//				if(s[j] == 'L') x ++;
//				if(s[j] == 'R') y ++;
//		
//				else if(a == b && x == y) ans ++;
//			}
//		}
//		printf("%d\n", ans);
//	}
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int main()
{
	int t; cin >> t;
	
	while (t --)
	{
		int n, ans = 0;
		char s[N];
		
		scanf("%d%s", &n, s + 1);
		for(int len = 2; len <= n; len += 2 )//ö�ٳ��� 
		{
			for(int l = 1; l + len - 1 <= n; l ++)//ö����˵� 
			{
				int a = 0, b = 0, x = 0, y = 0;//�ֱ��¼�������ҵĸ��� 
				int r = l + len - 1;//ȷ���Ҷ˵� 
				
				for(int i = l; i <= r; i ++ ) //ö�ٸ��Ӵ� 
				{
					//��¼���� 
					if(s[i] == 'U') a ++;
					if(s[i] == 'D') b ++;
					if(s[i] == 'L') x ++;
					if(s[i] == 'R') y ++;
				}
				
				//�����ж� 
				if(a == b && x == y) ans ++;	
				cout << ans << endl; 
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
