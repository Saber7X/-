#include<bits/stdc++.h>
using namespace  std;
struct put{
	int x;
	int y;
}a[105];
int cmp(put a,put b){
	if(a.y==b.y) return a.x<b.x;
	return a.y<b.y;
}
int main(){
	int n;
	int q=0;
	while(cin>>n)
	{
		if(n==0)
		{
			break;
		}
		for(int i=0;i<n;i++){
			cin>>a[i].x>>a[i].y;
		}
		sort(a,a+n,cmp);
		
		/*for(int i=0;i<n;i++){
			cout<<a[i].x<<" "<<a[i].y<<endl;
		}*/
		
		int xt=a[0].y;
		int sum=1;
		for(int i=1;i<n;i++){
			if(a[i].x>=xt){
				xt=a[i].y;
				sum++;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
