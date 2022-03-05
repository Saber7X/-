#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int k=n*m;
	int a=max(n,m);
	//int t=k;
	while(1)
	{
		int t=k;
		while(t%m!=0&&t>a)//当这个数不能被整除m整除时，一直减n知道能被m整除或t<=a，跳出循环 
		{
			t-=n;
		}
		if(t%m!=0&&k%n!=0&&k%m!=0)//t不能被n,m组成也不能被n,m整除 
		{
			printf("%d",k);
			break;
		}
		k--;
	}
	return 0;
}
//公式做法 
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    cout<<(m-1)*(n-1)-1<<endl;
    return 0;
}
*/
