//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int maxn = 0;
//		for (int i = 0; i <= n/2; i ++ )
//		{
//			for (int j = 0; j <= n / 2; j ++ )
//			{
//				int ff= n - i - j;
//				if (ff >= 0)
//				{
//					if ((i ^ j ^ ff) >= maxn)
//					{
//						maxn = max(maxn, i ^ j ^ ff);
//						cout << i << " " << j << " " << ff << ": " <<  (i ^ j ^ ff) << endl;
//					}
//					
//				}
//				
//			}
//			
//		}
//		cout << "最大值是" << maxn  << endl;
//	}
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int maxn = 0;
//		for (int i = 0; i <= n/2; i ++ )
//		{
//			int ff= n - i;
//			if (ff >= 0)
//			{
//				if ((i ^ ff) >= maxn)
//				{
//					maxn = max(maxn, i ^ ff);
//					cout << i << " " << ff << ": " <<  (i ^ ff) << endl;
//				}
//				
//			}
//			
//		}
//		cout << "最大值是" << maxn  << endl;
//	}
//	return 0;
//}

//4
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int cnt = 0;
//		int maxn = 0;
//		for (int i = 0; i <= n; i ++ )
//		{
//			for (int j = 0; j <= n; j ++ )
//			{
//				for (int k = 0; k <= n; k ++ )
//				{
//					int ff= n - i - j - k;
//					if (ff >= 0)
//					{
//						if ((i ^ j ^ ff ^ k) >= maxn)
//						{
//							maxn = max(maxn, i ^ j ^ ff ^ k);
//							if (maxn == n) cnt ++;
//							cout << i << " " << j << " "<< k << " " << ff << ": " <<  (i ^ j ^ k ^ ff) << endl;
//						}
//						
//					}
//				}
//				
//				
//			}
//			
//		} 
//		cout << "最大值是" << maxn  << endl;
//		cout << "有 " << cnt << " 个"<<endl; 
//	}
//	return 0;
//}

//5
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		int cnt = 0;
		int maxn = 0;
		for (int i = 0; i <= n; i ++ )
		{
			for (int j = 0; j <= n; j ++ )
			{
				for (int k = 0; k <= n; k ++ )
				{
					for (int ii = 0; ii <= n; ii ++ )
					{
						int ff= n - i - j - k - ii;
						if (ff >= 0)
						{
							if ((i ^ j ^ ff ^ k ^ ii) >= maxn)
							{
								maxn = max(maxn, i ^ j ^ ff ^ k ^ ii);
								if (maxn == n) cnt ++;
								cout << i << " " << j << " "<< k << " " << ii << " "<< ff << ": " <<  (i ^ j ^ k ^ ff ^ ii) << endl;
							}
							
						}
					}
				}
				
				
			}
			
		} 
		cout << "最大值是" << maxn  << endl;
		cout << "有 " << cnt << " 个"<<endl; 
	}
	return 0;
}

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int cnt = 0;
//		int maxn = 0;
//		for (int i = 0; i <= n; i ++ )
//		{
//			for (int j = 0; j <= n; j ++ )
//			{
//				for (int k = 0; k <= n; k ++ )
//				{
//					for (int ii = 0; ii <= n; ii ++ )
//					{
//						for (int jj = 0; jj <= n; jj ++ )
//						{
//							int ff= n - i - j - k - ii - jj;
//							if (ff >= 0)
//							{
//								if ((i ^ j ^ ff ^ k ^ ii^ jj) >= maxn)
//								{
//									maxn = max(maxn, i ^ j ^ ff ^ k ^ ii ^ jj);
//									if (maxn == n) cnt ++;
//									cout << i << " " << j << " "<< k << " " << ii << " "<<jj<< " "<< ff << ": " <<  (i ^ j ^ k ^ ff ^ ii ^ jj) << endl;
//								}
//								
//							}
//						}
//						
//					}
//				}
//				
//				
//			}
//			
//		} 
//		cout << "最大值是" << maxn  << endl;
//		cout << "有 " << cnt << " 个"<<endl; 
//	}
//	return 0;
//}
