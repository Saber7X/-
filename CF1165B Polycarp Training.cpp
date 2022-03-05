//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n,num[200005]={0};
//	map<int,int> res;
//	cin>>n;
//	for(int i=0;i<n;i++)
//	{
//		scanf("%d",&num[i]);
//	}
//	int k=0;
//	num[n]=200006;
//	while(1)
//	{
//		sort(num,num+n);
//		int flag=lower_bound(num,num+n,k)-num;
//		//cout<<num[flag]<<endl;
//		if(num[flag]==200006)
//		{
//			break;
//		}
//		else
//		{
//			num[flag]-=k;
//		}
//		k++;
//	}
//	cout<<k-1;
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,num[200005]={0};
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
	}
	sort(num,num+n);
	int ans=1;
	for(int i=0;i<n;i++)
	{
		if(num[i]>=ans)
		{
			ans++;
		}
	}
	cout<<ans-1; 
	return 0;
}

