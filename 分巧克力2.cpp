#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,cnt=0;
	int chang[1006],kuan[1006];
	int num[1006];
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&chang[i],&kuan[i]);
		//printf("%d %d", chang[i], kuan[i]);
		num[cnt]=chang[i];
		cnt++;
		num[cnt]=kuan[i];
		cnt++;
	}
	sort(num,num+cnt);
	
	int left=1;
	int right=100001;
	//bool t=2;
	int sum=0;
	
        
        
	while(1)
	{
		int mid=(left+right+1)/2;
		if(right==left)
		{
			printf("%d",mid);
			break;
		}
		
		sum=0;
		for(int i=0;i<n;i++)
		{
			sum=sum+(chang[i]/mid)*(kuan[i]/mid);
		}
		
		if(sum>k)
		{
			left=mid+1;
		}
		if(sum<k)
		{
			right=mid-1;
		}
		
		
	}
	/*2 10
9 9
2 7
4 2*/
	return 0;
}
