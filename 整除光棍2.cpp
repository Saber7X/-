#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int cnt=1;//被除数的位数
	int ans=1;//被除数
	while(1)
	{
		if(ans<n)
		{
			ans=ans*10+1;
			cnt++;
		}
		if(ans>=n)
		{
			break;
		}
	} 
	//printf("%d\n",ans);
	while(1)
	{
		printf("%d",ans/n);
		if(ans%n!=0)//如果不能整除
		{
			ans=(ans%n)*10+1;//余数尾0+1，更新被除数 
			cnt++; 
		 } 
		 else//如果可以整除则找到答案 
		 {
		 	break;
		 }
	}
	cout<<" "<<cnt;
	return 0; 
	
}
