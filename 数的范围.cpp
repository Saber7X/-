#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;//���鳤�ȣ���ѯ����
	int num[100006];
	scanf("%d %d",&n,&q);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	 } 
	 int x;//Ҫ��ѯ������ 
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
	 		if(num[mid]>=x)//ֱ��right��left�������ѭ�� 
	 		{
	 			right=mid;
			 }
			 else//if(num[mid]<x,�����ڵ�һ��Ҫ�ҵ��� 
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
		 	mid=(left+right+1)/2;//��Ϊ����2������ȡ��������һֱ����ߣ��������ѭ��������+1�����ܵ���R 
		 	if(num[mid]<=x)
		 	{
		 		left=mid;
			 }
			 else//if(num[mid]>x)//�������Ҷ˵��ϣ�Ȼ��ֻҪ���Ͻ��ж����ƽ���˵�ֱ�����Ҷ˵����Ȼ����� 
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
