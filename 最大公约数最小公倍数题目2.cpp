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
	cout<<x<<endl;//���Լ�� 
	cout<<m*n/x; //��С������ 
	return 0;
}

