#include<bits/stdc++.h>
using namespace std;
int main()
{
	int  n;
	scanf("%d",&n);//蚂蚁数量 
	int a;
	scanf("%d",&a);//第一个蚂蚁
	int left=0;
	int right=0;
	for(int i=1;i<n;i++)
	{
		int x;
		scanf("%d",&x);
		if(abs(x)>abs(a)&&x<0)
		{
			left++;
		}
		if(abs(x)<abs(a)&&x>0)
		{
			right++;
		}
	 } 
	 if((a<0&&right==0)||(a>0&&left==0))
	 {
	 	printf("1");
	 }
	 else{
	 	printf("%d",right+left+1);
	 }
	return 0;
}
