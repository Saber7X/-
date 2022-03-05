#include<bits/stdc++.h>
using namespace std;
int main()
{
	double num[1000];
	double yuanjia;
	double zhekou;
	int cnt=0;
	double sum=0.0;
	while(1)
	{
		scanf("%lf %lf",&yuanjia,&zhekou);
		if(zhekou==0&&yuanjia==0)
		{
			break;
		}
		num[cnt]=yuanjia*zhekou*1.0;
		cnt++;
		
	}
	for(int i=0;i<cnt;i++)
	{
		sum+=num[i];
	}
	printf("%lf",sum);
	return 0;
}
