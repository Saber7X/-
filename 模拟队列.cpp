#include<bits/stdc++.h> 
using namespace std;
//******************���� 
const int N=100010;

//�ڶ�β����Ԫ�أ��ڶ�ͷ����Ԫ�� 
int q[N],tt=-1,hh;

////����
//q[++t]  = x;
//
////����
//hh++; 
//
////�ж϶����Ƿ�ǿ�
//if(hh<=tt) ���ǿյ� 
//else �յ� 
//
////ȡ����ͷԪ��
//q[hh] 
//
////ȡ����βԪ��
//q[tt] 
//




int main()
{
	int t;
	cin>>t;
	while(t--) 
	{
		string s;
		cin>>s;
		if(s=="empty")
		{
			if(hh<=tt)
			{
				cout<<"NO"<<endl;
			}
			else
			{
				cout<<"YES"<<endl;
			}
		}
		if(s=="pop")
		{
			hh++;
		}
		if(s=="query")
		{
			cout<<q[hh]<<endl;
		}
		if(s=="push")
		{
			int n;
			cin>>n;
			q[++tt]=n;
		}
	}
	return 0;
}
