#include<iostream>
#include<cstring>
#include<algorithm>
#define ll long long int
using namespace std;
int main(){
	ll t,a,b,c,x,y,sum;
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		x=c/a;
		if(c%a!=0) x++;
		y=1+a*(x-1);
		y=c-y;
		sum=x+b*y;
		cout<<sum<<endl;
	}
	return 0;
}
