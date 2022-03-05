#include<bits/stdc++.h>
using namespace std;
int yunsuan(int a, int b){
    return a ^ b;
}
int main()
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		
		cout<<yunsuan(a,b)<<endl;
	}
	return 0;
 } 

