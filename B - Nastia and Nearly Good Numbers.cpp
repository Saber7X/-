#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		int c=max(a,b);
		long long int sum;
		sum=a*b; 
		int t=0;
		int ct=0;
		int w=c;
		for(long long int i=w;i<=sum;i++){
			if(t==0&&i%a==0&&i%b!=0){
				t=i;
				cout<<i<<" ";
			}
			if(ct==0&&i%a==0&&i%b!=0&&t==0){
				ct=i;
				cout<<i<<" "<<endl;
			}
			if(ct!=0&&t!=0&&(ct+t)==sum&&ct%(a*b)!=0&&t%(a*b)!=0){
				cout<<sum<<endl;
				break;
			}
			w=sum;
			sum*=2;
		}
	}
	return 0;
}
