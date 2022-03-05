//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int T;
//	cin >> T;
//	while(T--)
//	{
//		bool flag = false;
//		int a, b;
//		string s;
//		cin >> a >> b >> s;
//		map<char,int> res;
//		if(a%2 !=0&&b%2!=0)
//		{
//			cout <<"-1"<<endl;
//			continue; 
//		}
//		for(int i = 0; i < s.length() ; i ++)
//		{
//			res[ s[i] ] ++ ;
//		}
//		
//		if(res['?'] == 0 )
//		{
//			if(res['1'] != b || res[0] != a)
//			{
//				cout << "-1" << endl;
//				continue;
//			}
//		}
//		 
//		if(res['?'] == 1 && a+b==1)
//		{
//			if(a == 1)
//			{
//				cout <<"0" <<endl;
//			}
//			else
//			cout << "1" << endl;
//			
//			continue;
//		}
//		res['1'] = b -res['1'];
//		res['0'] = a -res['0'];
//		
//		for(int i = 0; i < s.length() / 2 ; i ++)
//		{
//			if(s[i] == '?' && s[s.length() - i -1] == '?')//如果两边都是问号就跳过 
//			{
//				continue;
//			}
//			
//			if( s[i] != '?' &&  s[s.length() - i -1] != '?' && s[i] != s[s.length() - i -1]  )//如果两边是数字且不相等那么就无法构成回文 
//			{
//				flag = true;
//				break; 
//			}
//			
//			if( s[i] == '?' &&  s[s.length() - i-1] != '?' ) //前面是问号，后面是数字，那前面的就等于后面的 
//			{
//				s[i] = s[s.length() - i -1];
//				res[ s[i] ] --;
//				res['?'] --;
//			}
//			if( s[i] != '?'  &&  s[s.length() - i -1]=='?' )
//			{
//				s[s.length() - i -1] = s[i];
//				res[ s[i]] --;
//				res['?'] --;
//			}
//		}
//		
//		if(flag)
//		{
//			cout << "-1" << endl;
//			continue;
//		}
//		
//		if(res['?'] %2 != 0)
//		{
//			if(res['1'] %2!=0)
//			{
//				s[s.length()/2] = '1' ;
//				res['1'] -- ;
//				res['?'] -- ;
//			}
//			else if(res['0'] % 2 != 0)
//			{
//				s[s.length()/2] = '0' ;
//				res['0'] --;
//				res['?'] --;
//			}
//			if(s[s.length()/2] == '?')
//			{
//				cout<<"-1"<<endl;
//				continue; 
//			}
//		}
//		for(int i = 0;i <s.length()/2; i ++)
//		{
//			if(s[i] == '?')
//			{
//				if(res['1']>0)
//				{
//					s[i] = '1';
//					s[s.length()-i - 1] = '1';
//					res['1'] -= 2;
//					res['?'] -= 2;
//				}
//				else if(res['0']>0)
//				{
//					s[i] = '0';
//					s[s.length()-i -1] = '0';
//					res['0'] -= 2;
//					res['?'] -= 2;
//				}
//			}
//		}
//		cout << s <<endl;
//	}
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		bool flag = false;
		int a, b;
		char[200005];
		cin >> a >> b >> s + 1;
		int N = strlen(s + 1);
		if(a + b != N)
		{
			cout <<"-1" <<endl;
		}
		for(int i = 1; i <= N ; i ++)
		{
			if(s[i] != '?')
			{
				if(s[N - i + 1]!= s[i] && s[N - i + 1]!='?')
				{
					flag = true;
					break;
				}
				if(s[N - i + 1] == '?')
				{
					s[N - i + 1] = s[i];
				}
			} 
		}
		for(int i =1; i <=N;i++)
		{
			if(s[i]=='0')
			{
				a--;
			}
			if(s[i] == '1')
			{
				b--;
			}
		}
		if(flag || a<0 || b < 0)
		{
			cout << "-1" << endl;
			continue;
		}
		
		for(int i = 1; i <= N ; i++)
		{
			if(s[i] == '?')
			{
				if(N - i +1 == i)
				{
					if(a%2 != 0)
					{
						a --;
						s[i] = '0';
					}
					if(b%2 != 0)
					{
						b--;
						s[i] = '1';
					}
				} 
			}
			else
			{
				
			}
			
		}
		for(int i = 0;i <s.length()/2; i ++)
		{
			if(s[i] == '?')
			{
				if(res['1']>0)
				{
					s[i] = '1';
					s[s.length()-i - 1] = '1';
					res['1'] -= 2;
					res['?'] -= 2;
				}
				else if(res['0']>0)
				{
					s[i] = '0';
					s[s.length()-i -1] = '0';
					res['0'] -= 2;
					res['?'] -= 2;
				}
			}
		}
		cout << s <<endl;
	}
	return 0;
}
