#include<bits/stdc++.h>
using namespace std;
//const int maxn=1000001;
long long int num[1000011]={0};
long long int n;//数组长度 
void find(long long int a)
{
	long long int left=0;
	long long int right=n-1;
	long long int mid=(left+right)/2;
	while(1)
	{
		
		mid=(left+right)/2;
		if(a>num[mid])
		{
			left=mid+1;
		}
		if(a<num[mid])
		{
			right=mid-1;
		}
		if(a==num[mid])
		{
			printf("YES"); 
			break;
		 } 
		if(left>right)
		{
			printf("NO");
			break;
		}
	 } 
 } 
 int main()
 {
 	long long int ans[1000011];
 	long long int m;
	 scanf("%lld %lld",&n,&m);
 	for(long long int i=0;i<n;i++)
 	{
 		
 		scanf("%lld",&num[i]);
	 }
	 sort(num,num+n);
	 for(long long int i=0;i<m;i++)
	 {
	 	scanf("%lld",&ans[i]);
	 }
	 for(int i=0;i<m;i++)
	 {
	 	find(ans[i]);
	 	if(i!=m-1)
	 	{
	 		printf("\n");
		 }
	 }
	 return 0;
 }
