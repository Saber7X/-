#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;//���
	int m;//m����Ʒ
	cin>>n>>m;
	int num[50]={0};
	for(int i=0;i<m;i++)
	{
		cin>>num[i];
	 } 
	 sort(num,num+m);
	 for(int i=0;i<m;i++)
	 {
	 	cout<<num[i];
	 }
	 int sum=0;
	 int cnt;
	/* for(int i=0;i<m;i++)
	 {
	 	
	 	sum+=num[i];
	 	if(sum==n)
	 	{
	 		cout<<0;
	 		break;
		 }
		 if(sum>n)
		 {
		 	cout<<cnt;
		 	break;
		 }
		 cnt=n-sum; 
	 }*/
}
