//a+a*(b-1)==a*b���˷������ɣ�����x,y�϶�����a*b�ı��� 
//���a��b���||b==1��϶����ԣ����NO
//���b==2,��ֱ�����󼸱�����
//Ȼ��ֱ�Ӱ��� a+a*(b-1)==a*b ������� 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int a,b;
		cin>>a>>b;
		if(b==1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
			if(b==2)
			{
				b*=3;
			}
			cout<<a*(b-1)<<" "<<a<<" "<<a*b<<endl;
		}
	}
	return 0;
}
