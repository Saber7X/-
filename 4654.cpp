#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,m;
	int a[500004];
	int b[500004];
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{ 
		cin>>a[i];
		b[i]=max(b[i-1],a[i]);
	}
	for(int i=0;i<m;i++){
		int x;
		cin>>x; 
		int t=lower_bound(b+1,b+1+n,x)-b;//二分查找，返回第一个比x大的数的下标 
		if(t>n||t<=1)
		{
			 continue;
		 }
		a[t-1]++;
		if(b[t-1]<a[t-1])
		{
				b[t-1]=a[t-1];
		}
	} 
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<endl;
	 } 
	return 0;	
}

