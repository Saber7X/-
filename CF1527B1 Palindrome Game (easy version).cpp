//��һ�����Ĵ���ALICE���֣�
//�����ż����BOB��ʤ��ALICE�ȣ����������ܷ�ת��ֻ���޸ģ�Ȼ��BOB���޸ģ�ʹ�ַ����ֱ��һ�����ĵģ�ֱ��ʣ������0��ʱ��ALICE�޸ģ�ֻʣ1��0����ʱ���ǻ��ģ�Ȼ��BOB�ͷ�ת����������������ʱALICEֻ���޸ĵ����һ��0����ʱȫ������1��ALICE���ĵ�������BOB��2������ż��ʱBOB��ʤ 
//�����������1���⣩�� ALICE��ʤ��ALICE����һ��ʹ�ַ�����ɻ���(�޸��м��0)����ʱ0Ϊż���������������ͻص�����һ��������ֻ�����ֱ����BOB��һ��������BOB������������ALICE��1������ALICE��ʤ 
//���ֻ��һ��0��BOB��ʤ�����ض�˵ 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,sum=0;
		string s;
		cin>>n>>s;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='0')
			{
				sum++;
			}
		}
		if(sum==1)
		{
			cout<<"BOB"<<endl;
		}
		else if(sum%2==0)
		{
			cout<<"BOB"<<endl;
		}
		else
		{
			cout<<"ALICE"<<endl;
		}
	}
	return 0; 
}
