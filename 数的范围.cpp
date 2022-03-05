#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;//数组长度，查询个数
	int num[100006];
	scanf("%d %d",&n,&q);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	 } 
	 int x;//要查询的数； 
	 sort(num,num+n);
	 for(int i=0;i<q;i++)
	 {
	 	int left=0;
	 	int right=n-1;
	 	int mid;
	 	scanf("%d",&x);
	 	while(left<right)
	 	{
	 		mid=(left+right)/2;
	 		if(num[mid]>=x)//直到right和left相等跳出循环 
	 		{
	 			right=mid;
			 }
			 else//if(num[mid]<x,正好在第一个要找的数 
			 {
			 	left=mid+1;
			 }
			 
		 }
		 if(num[left]==x)
		 {
		 	printf("%d ",left);
		
		 right=n-1;
		 while(left<right)
		 {
		 	mid=(left+right+1)/2;//因为除以2是向上取整，所以一直在左边，会进入死循环，所以+1，才能到达R 
		 	if(num[mid]<=x)
		 	{
		 		left=mid;
			 }
			 else//if(num[mid]>x)//正好在右端点上，然后只要不断进行二分推进左端点直到与右端点相等然后输出 
			 {
			 	right=mid-1;
			 }
		 }
		 cout<<left<<endl;
		  }
		  else
		  {
		  	cout<<"-1 -1"<<endl;
		  }
	 	
	 }
	return 0;
}
