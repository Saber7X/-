#include<bits/stdc++.h>
using namespace std;
const int maxn=101;
int prime[maxn],pnum=101;
bool p[maxn]={0};
void find_prime()
{
	for(int i=2;i<maxn;i++)//遍历要找的范围,因为要找1到100，而maxn==101，所以用<maxn; 
	{
		if(p[i]==0)//如果是素数 
		{
			prime[pnum]=i;//存入素数数组中 
			printf("%d ",i); 
		 for(int j=i*i;j<maxn;j+=i)//此步骤可写在if里也可写在if外，但我个人觉得写在里面更好理解也减少了一点重复计算，嗯，那就写在里面吧 
		 {
		 	p[j]=1;//标记 
		}
		 } 
		  
	 } 
}
int main()
{
	find_prime();
	return 0;
}
