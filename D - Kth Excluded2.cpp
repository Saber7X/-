//#include<bits/stdc++.h>
//#define int long long
//using namespace std;
//signed main()
//{
//	int n,num[2005]={0},q,num1[2005]={0};
//	cin>>n>>q;
//	for(int i=1;i<=n;i++)
//	{
//		cin>>num[i];
//	}
//	sort(num+1,num+1+n);
//	for(int i=1;i<=n;i++)
//	{
//		num1[i]=num[i]-num[i-1]-1+num1[i-1];
//		cout<<num1[i]<<" ";
//	}
//	cout<<endl;
//	
//	return 0;
//}
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<set>
#include<vector>

using namespace std;
long long s[100009];long long s1[100009];
int main(){
	int n,q;
	cin>>n>>q;	
	for(int i=1;i<=n;++i){
        cin>>s[i];		
	}
	sort(s+1,s+1+n);
	
	for(int i=1;i<=n;++i){
		s1[i]=s[i]-s[i-1]-1+s1[i-1];//构造差分数列
	}
	
	for(int i=1;i<=n;++i)cout<<i<<":"<<s1[i]<<endl;
		
//	for(int i=0;i<q;++i){
//		long long b;cin>>b;		
//		int h=lower_bound(s1,s1+1+n,b)-s1;//找到能容纳第b号查找的最小差分元素
//		cout<<b+s[h-1]-s1[h-1]<<endl;//根据前一被删元素定位所查元素
//	}
	return 0;
}
