#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y,n,m,z;
	cin>>x>>y;
	m=x,n=y;
	while(y!=0){
		z=x%y;
		x=y;
		y=z;
	}
	cout<<x<<endl;//最大公约数 
	cout<<m*n/x; //最小公倍数 
	return 0;
}

