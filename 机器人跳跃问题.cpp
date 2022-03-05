#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

long long int n;	
long long int num[100005];

bool check(long long int x)
{
	for(long long int i=1;i<=n;i++)
	{
		x=2*x-num[i];
		if(x>=1e5)
		{
			return true;//�������1e5�ͳ����˷�Χ��˵����������ˣ����Դ�ʱ����true; 
		}
		if(x<0)
		{
			return false;
		}
		
	}
	return true;
}
//������ȷ����a;
//ͨ������ɵ����a����С������Ҫ��Ĵ𰸣���ô��a���������������Ҫ�� 
//���Դ𰸿���ͨ���������ң���ΪҪ����С�����Ծ��൱���Ƕ�������˵�
//����r=mid,l=mid+1;
  
int main()
{

	cin>>n;
	long long int sum;
	for(long long int i=1;i<=n;i++)
	{
		cin>>num[i];
	}
	long long int l=0;
	long long int r=1e5; 
	while(l<r)
	{
		long long int mid= (l+r)/2;
		if(check(mid))//���mid����Ҫ��˵������ȷ�𰸵��ұߣ����� 
		{
			r=mid;
		}
		else                                                                                                                
		{
			l=mid+1;
		}
	}
	cout<<r;
	return 0;
}
