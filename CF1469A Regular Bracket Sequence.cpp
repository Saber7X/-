//ֻҪ��֤�ܳ�����ż��������β�Ϸ�����һ�����ԣ���Ϊ�����ַ�����ֻ�����һ�����ͣ�������һ�������ʺ� 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		if(s.length()%2==0&&s[0]!=')'&&s[s.length()-1]!='(')
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
