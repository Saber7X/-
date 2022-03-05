#include<bits/stdc++.h>
using namespace std;
int main()
 {
 	int n;
 	cin>>n;
 	for(int i=0;i<n;i++)
 	{
 		int a,b,c;
 		cin>>a>>b>>c;
 		if(abs(a-b)<=c)//可以全部放在一个袋子里 
 		{
 			cout<<"YES"<<endl;
		 }
		 else
		 {
		 	int minn=min(a,b);
		 	int sum=abs(a-b)/minn;
		 	if(sum<c)//如果每个袋子红蓝的差小于要求的 
		 	{
		 		cout<<"YES"<<endl;
			 }
			 else if(sum==c)//如果每个袋子红蓝的差等于要求的 
			 {
			 	if(abs(a-b)%minn==0)//如果可以整除 
			 	{
			 		cout<<"YES"<<endl;
				 }
				 else//不可以整除 
				 {
				 	cout<<"NO"<<endl;
				 }
			 }
			 else//如果每个袋子红蓝的差大于要求的 
			 {
			 	cout<<"NO"<<endl;
			 }
		 }
	 }
 	return 0;
 }
