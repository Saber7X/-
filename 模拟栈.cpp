#include<bits/stdc++.h> 
using namespace std;

const int N=100010;

int stk[N],tt;
////***********************Õ» 
////²åÈë 
//skt[++tt] =x;
//
////µ¯³ö
//t--; 
//
////ÅĞ¶ÏÕ»ÊÇ·ñÎª¿Õ
//if(tt>0) ²»¿Õ
//else  ¿ÕµÄ 
// 
////Õ»¶¥
//stk[tt];
 
int main()
{
	 int t;
	 cin>>t;
	 while(t--)
	 {
	 	string s;
	 	cin>>s;
	 	if(s=="empty")
	 	{
	 		if(tt>0)
	 		{
	 			cout<<"NO"<<endl;
			}
			else
			{
				cout<<"YES"<<endl;
			}
		}
		if(s=="pop")
		{
			tt--;
		}
		if(s=="query")
		{
			cout<<stk[tt]<<endl;
		}
		if(s=="push")
		{
			int n;
			cin>>n;
			stk[++tt]=n;
			
		}
	 }
	return 0;
} 
