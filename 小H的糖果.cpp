#include<bits/stdc++.h>
using namespace std;
long long fastPower(long long base, long long power) 
{
    long long result = 1;
	while (power > 0) 
	{
        if (power % 2 == 0) 
		{
            power = power / 2;//��ָ����СΪһ��
            base = base * base % 1000;//��������ԭ����ƽ��
        } 
		else 
		{
            power = power - 1;//��ָ����ȥ1��ʹ����һ��ż��
			result = result * base % 1000;//��ʱ�ǵ�Ҫ��ָ��Ϊ����ʱ��������ĵ�����һ�η��ռ���
            power = power / 2;//��ʱָ��Ϊż�������Լ���ִ�в���
            base = base * base % 1000;
        }
    }
    return result;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,sum=0,flag,cnt=0;
		cin>>n>>k;
		for(long long int i=1;fastPower(n,i)<=k;i++)
		{
			flag=fastPower(n,i);
			cnt++; 
		}
		cnt+=(k-flag);
		cout<<cnt<<endl;
		
	}
	return 0;
}
