#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;//n只蚂蚁
	cin>>n;
	int left=0;
	int right=0;
	int a;//第一只蚂蚁的位置
	scanf("%d",&a);
	int x; 
	for(int i=1;i<n;i++)
	{
		scanf("%d",&x); 
		if(abs(x)>abs(a)&&x<0)//右边向左走 
	 	{
	 		left++;
		 }
		 else if(abs(x)<abs(a)&&x>0)//左边向右走
		 {
		 	right++; 
		  } 
	 } 
	 if((a<0&&right==0)||(a>0&&left==0))//蚂蚁向左走时它左边没有向右走的 或者 蚂蚁向右走时它右边没有向左走的
	 {
	 	printf("1" ); 
	 }
	 else
	 {
	 	printf("%d",right+left+1);
	 }
	return 0;
 } 
