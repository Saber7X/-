#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int sum=0;
	int n;
	int cnt=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int temp=i;
		while(temp)
		{
			if(temp%10==1||temp%10==9||temp%10==2||temp%10==0)
			{	
				cnt++;
				sum+=i;//Ҫ+=i����Ϊtemp �Ѿ����������ˣ���С�� 
				break;
			}
			temp/=10;
		}
	}
	cout<<sum;
}
