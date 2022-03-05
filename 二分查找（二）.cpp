#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;//数组长度，查询数量
	scanf("%d %d",&n,&m);
	int num[100005];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	 } 
	 sort(num,num+n);
	 int x;
	 while(m--)
	 {
	 	
	 	scanf("%d",&x);
	 	int left=0;
	 	int right=n-1;
	 	int mid;
	 	while(1)
	 	{
	 		/*if(x<num[0])
	 		{
	 			cout<<num[0]<<endl;
	 			break;
			 }
			 if(x>num[n-1])
			 {
			 	cout<<"-1"<<endl;
			 	break;
			 }*/
	 		
			 /*if(num[n-1]==x)
			 {
			 	cout<<num[n-1]<<endl;
			 	break;
			 }*/
			 mid=(left+right+1)/2;
	 		if(num[mid]>x)
	 		{
	 			right=mid-1;
			 }
			 if(num[mid]<=x)
			 {
			 	left=mid;
			 }
			 /*if(num[mid]==x)
			 {
			 	cout<<num[mid+1]<<endl;
			 	break;
			 }*/
			 if(left>=right)
			 {
			 	if(num[mid]<x)
			 	{
			 		for(int i=mid;i<n;i++)
			 		{
			 			if(num[i]>x)
			 			{
			 				cout<<num[i]<<endl;
			 				break;
						 }
					 }
				 }
				 else
				 {
				 	printf("%d\n",num[mid]);
			 		break;
				 }
			 		
			
				
			 	
			 }
		 }
	 }
	return 0;
}
